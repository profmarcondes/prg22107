#include "helloqt.h"

#include <QApplication>
#include <QtWidgets>

/*
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>
#include <QCheckBox>
#include <QSlider>
#include <QSpinBox>
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloQT window1;
    window1.show();

    HelloQT window2;
    window2.show();

    return a.exec();
}
