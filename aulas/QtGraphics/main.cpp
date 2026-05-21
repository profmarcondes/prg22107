#include "qtgraphics.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtGraphics w;
    w.show();
    return a.exec();
}
