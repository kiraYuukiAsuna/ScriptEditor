#pragma once

#include "FrontEnd/AstAnalysis.h"
#include <QMouseEvent>
#include "Qsci/qsciscintilla.h"
#include "Qsci/qsciapis.h"
#include <QSci/qscilexerpython.h>


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

        AstAnalysis astAnalysis;
        astAnalysis.reloadDocument(this->text().toStdString());
        astAnalysis.analysis();
        auto errorInfo = astAnalysis.getErrorInfo();

        for(auto& i : errorInfo){
            auto str = std::format("in line {} start {} end {}\n", i.line,i.startPos, i.endPos);
            std::cout<<str;
        }

        for (int i = 0; i < 3; ++i) {
            clearAllIndicators(i);
        }

        if(errorInfo.size() > 3){
            for(int i=0;i<3;i++){
                auto info = errorInfo[i];
                if(info.startPos != info.endPos) {
                    fillIndicatorRange(info.line - 1, info.startPos, info.line - 1,
                                       info.endPos, i);
                }else{
                    fillIndicatorRange(info.line - 1, 0, info.line - 1,
                                       info.endPos, i);
                }
            }
        }else{
            for(int i=0;i<errorInfo.size();i++){
                auto info = errorInfo[i];
                if(info.startPos != info.endPos) {
                    fillIndicatorRange(info.line - 1, info.startPos, info.line - 1,
                                       info.endPos, i);
                }else{
                    fillIndicatorRange(info.line - 1, 0, info.line - 1,
                                       info.endPos, i);
                }
            }
        }
        qDebug()<<errorInfo.size();
    }

private:
    QStringList keywordList;
    int lastPos;  // Added this member variable to store the last position
};