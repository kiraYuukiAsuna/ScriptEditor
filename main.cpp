#include "Editor/CodeEditor.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CodeEditor mainWin;
    mainWin.show();
    return app.exec();
}

