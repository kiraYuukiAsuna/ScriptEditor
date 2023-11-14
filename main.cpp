#include "Editor/CodeEditor.h"
#include <QApplication>
#include "Editor/KeywordDefination.h"

int main(int argc, char *argv[]) {
    KeywordDefination defination("common_kw.yml");


    QApplication app(argc, argv);
    CodeEditor mainWin;
    mainWin.show();
    return app.exec();
}

