#include "helloqt.h"

#include <QApplication>
//#include <QLabel>
//#include <QPushButton>
//#include <QVBoxLayout>

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloQT w;
    w.show();
    return a.exec();
}
