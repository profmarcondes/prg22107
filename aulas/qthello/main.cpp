#include "helloqt.h"
#include "age.h"

#include <QApplication>
//#include <QWidget>
//#include <QPushButton>
//#include <QLabel>
//#include <QHBoxLayout>

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    HelloQT w;
    w.show();
    return app.exec();

}
