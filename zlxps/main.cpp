#include "zlxps.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    zlxps w;
    w.show();
    return a.exec();
}
