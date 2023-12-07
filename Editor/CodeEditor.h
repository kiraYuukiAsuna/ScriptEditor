#pragma once

#include "Backend/BackendAnalyzer.h"
#include <QMouseEvent>
#include "Qsci/qsciscintilla.h"
#include "Qsci/qsciapis.h"
#include <QSci/qscilexerpython.h>
#include "KeywordDefination.h"

class CodeEditor : public QsciScintilla
{
    Q_OBJECT

public:
    CodeEditor(QWidget *parent = nullptr);
    void onMarginClicked(int margin, int line, Qt::KeyboardModifiers modifiers);
    void toggleBreakpoint(int line);


protected:
    void mouseMoveEvent(QMouseEvent *event) override;

    void clearAllIndicators(int indicatorNumber) {
        int lineCount = this->lines();

        for (int line = 0; line < lineCount; ++line) {
            this->clearIndicatorRange(line, 0, line, this->lineLength(line), indicatorNumber);
        }
    }

    void keyPressEvent(QKeyEvent *event) override {
        QsciScintilla::keyPressEvent(event);

        BackendAnalyzer astAnalysis;
        astAnalysis.reloadDocument(this->text().toStdString());
        astAnalysis.analysis(m_KeywordDefination);
        m_CurrentErrorInfo.clear();
        m_CurrentErrorInfo = astAnalysis.getErrorInfo();

        for(auto& i : m_CurrentErrorInfo){
            auto str = std::format("in line {} start {} end {}\n", i.sePosition.startLine,i.sePosition.startPos, i.sePosition.endPos);
            qDebug()<<str<<" has size:" << m_CurrentErrorInfo.size();;
        }

        for (int i = 0; i < 3; ++i) {
            clearAllIndicators(i);
        }

        if(m_CurrentErrorInfo.size() > 3){
            for(int i=0;i<3;i++){
                auto info = m_CurrentErrorInfo[i];
                if(info.sePosition.startPos != info.sePosition.endPos) {
                    fillIndicatorRange(info.sePosition.startPos - 1, info.sePosition.startPos, info.sePosition.startLine - 1,
                                       info.sePosition.endPos, i);
                }else{
                    fillIndicatorRange(info.sePosition.startLine - 1, 0, info.sePosition.startLine - 1,
                                       info.sePosition.endPos, i);
                }
            }
        }else{
            for(int i=0;i<m_CurrentErrorInfo.size();i++){
                auto info = m_CurrentErrorInfo[i];
                if(info.sePosition.startPos != info.sePosition.endPos) {
                    fillIndicatorRange(info.sePosition.startLine - 1, info.sePosition.startPos, info.sePosition.startLine - 1,
                                       info.sePosition.endPos, i);
                }else{
                    fillIndicatorRange(info.sePosition.startLine - 1, 0, info.sePosition.startLine - 1,
                                       info.sePosition.endPos, i);
                }
            }
        }
    }

    void reloadAutoCompleteApi();

private:
    QStringList keywordList;
    int lastPos;  // Added this member variable to store the last position
    std::vector<ErrorInfo> m_CurrentErrorInfo;
    QsciLexerPython* m_Lexer;
    QsciAPIs* m_Api;
    KeywordDefination m_KeywordDefination;
};