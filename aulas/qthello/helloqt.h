#ifndef HELLOQT_H
#define HELLOQT_H

#include <QWidget>
#include <QtWidgets>
#include "age.h"

class HelloQT : public QWidget {
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();

private:
    QLabel * label;
    QPushButton * quitBtn;
    QPushButton * aboutBtn;
    Age         * ageWidget;
    QVBoxLayout * mainLayout;
    QHBoxLayout * btnLayout;

};
#endif // HELLOQT_H
