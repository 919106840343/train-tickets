#include "trainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    trainWidget w;
    w.show();

    return a.exec();
}
