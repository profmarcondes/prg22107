
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include "helloqt.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    HelloQT window;
    window.show();

    //HelloQT w2;
    //w2.show();
    return app.exec();

}
