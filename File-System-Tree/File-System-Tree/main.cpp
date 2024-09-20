#include <QApplication>
#include "File_System_Tree.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    File_System_Tree explorer;
    explorer.show();

    return app.exec();
}


