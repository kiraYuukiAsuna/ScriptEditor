#include "CodeEditor.h"

CodeEditor::CodeEditor(QWidget *parent) : QsciScintilla(parent)
{
    // Set margin for line numbers
    setMarginType(0, QsciScintilla::NumberMargin);
    setMarginWidth(0, "00000");  // Adjust the width to fit the number of lines in your document

    // Set margin for markers (e.g., breakpoints)
    setMarginType(1, QsciScintilla::SymbolMargin);
    setMarginWidth(1, 16);  // Adjust the width to fit your marker icons

    setMarginSensitivity(0, true);  // Assuming the line number margin is margin 0
    setMarginSensitivity(1, true);  // Make the marker margin clickable

    // Define a marker for breakpoints
    int markerNumber = 0;  // Marker numbers range from 0 to 31
    markerDefine(QsciScintilla::Circle, markerNumber);
//    QPixmap pixmap("C:\\Users\\KiraY\\Desktop\\scintilla_more\\EditorDemo\\images\\copy.png");  // Load a custom icon
//    markerDefine(pixmap, markerNumber);

    setMarkerBackgroundColor(QColor(Qt::red), markerNumber);


// Connect the marginClicked signal to a slot
    connect(this, &QsciScintilla::marginClicked, this, &CodeEditor::onMarginClicked);

    auto *lexer = new QsciLexerPython(this);
    auto *apis = new QsciAPIs(lexer);
    apis->add("function");
    apis->add("var");
// ... add other keywords or APIs
    apis->prepare();
    lexer->setAPIs(apis);

    this->setLexer(lexer);

    // Set auto-completion
    setAutoCompletionSource(QsciScintilla::AcsAll);
    setAutoCompletionThreshold(1);  // start autocompletion after 1 character

//    setPaper(QColor(Qt::yellow));  // Set to yellow or any other color you prefer, override by lexer

    QFont font("Courier", 16);  // Set the font name and size
    int style = QsciScintilla::STYLE_LINENUMBER;
    auto color = QColor(Qt::blue);
    int rgb = (color.blue() << 16) | (color.green() << 8) | color.red();
    // note!!! color in QsciScintilla using is actually by bgr format rather than rgb
    SendScintilla(QsciScintilla::SCI_STYLESETFONT, style, font.family().toUtf8().constData());
    SendScintilla(QsciScintilla::SCI_STYLESETSIZE, style, font.pointSize());
    SendScintilla(QsciScintilla::SCI_STYLESETFORE, style, rgb);  // Set the text color
    color = QColor(Qt::gray);
    rgb = (color.blue() << 16) | (color.green() << 8) | color.red();
    SendScintilla(QsciScintilla::SCI_STYLESETBACK, style, rgb);  // Set the background color

    // 编辑器设置
    // ----------------------------------------
    // 设置Tab键为4个空格
    setTabWidth(4);
    // 开启自动缩进
    setAutoIndent(true);
    // 高亮当前行
    setCaretLineVisible(true);
    // 设置当前行颜色
    setCaretLineBackgroundColor(QColor("#E8E8FF"));
    // 编辑器放大
    zoomIn(8);


    // 定义错误指示器的样式和颜色
    for (int j = 0; j < 3; ++j) {
        indicatorDefine(SquiggleIndicator, j);
        setIndicatorForegroundColor(QColor("red"), j);
    }

    // 添加一些示例文本
    setText(R"(
def func():
    a = 1

def a:
)");

    // 在第4行标记一个错误
//    fillIndicatorRange(3, 0, 3, 1, 0);

    // 设置边距为符号边距，用于显示折叠标志
    setMarginType(2, QsciScintilla::SymbolMargin);
    setMarginWidth(2, 16);
    setMarginSensitivity(2, true);

    // 设置边栏以显示折叠标记
    setFolding(QsciScintilla::BoxedTreeFoldStyle,2);
//    setFoldMarginColors(Qt::darkGray, Qt::darkBlue);

}

void CodeEditor::onMarginClicked(int margin, int line, Qt::KeyboardModifiers modifiers)
{
    if (margin == 0 || margin == 1) {  // Assuming the line number margin is margin 0
        toggleBreakpoint(line);
    }
}

void CodeEditor::toggleBreakpoint(int line)
{
    int markerNumber = 0;
    if (markersAtLine(line) & (1 << markerNumber)) {
        // Breakpoint exists at this line, so remove it
        markerDelete(line, markerNumber);
    } else {
        // No breakpoint at this line, so add one
        markerAdd(line, markerNumber);
    }
}

void CodeEditor::mouseMoveEvent(QMouseEvent *event) {
// 调用基类的处理函数
    QsciScintilla::mouseMoveEvent(event);

// 获取鼠标下方的位置
    int pos = SendScintilla(SCI_POSITIONFROMPOINT, event->x(), event->y());

// Check if the position is the same as the last position
    if (pos == lastPos) {
        return;
    }

    lastPos = pos;  // Update the last position

    int line, index;
    lineIndexFromPosition(pos, &line, &index);

// 获取当前位置的指示器值
    int indicatorValue = SendScintilla(SCI_INDICATORVALUEAT, 0, pos);

// 获取指示器的范围
    int start = SendScintilla(SCI_INDICATORSTART, 0, pos);
    int end = SendScintilla(SCI_INDICATOREND, 0, pos);


// 检查当前位置是否有错误指示器
    if (indicatorValue != 0) {
// 如果有错误，显示 CallTip
        QString errorMessage = "这里有一个错误";
        SendScintilla(SCI_CALLTIPSHOW, pos, errorMessage.toUtf8().data());
    }else {
// 如果没有错误，隐藏 CallTip
        SendScintilla(SCI_CALLTIPCANCEL);
    }
}
