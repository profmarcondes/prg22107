#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtWidgets>

class HelloQT : public QWidget
{
    Q_OBJECT

public:
    HelloQT(QWidget *parent = nullptr);
    ~HelloQT();


private:
    QLabel * label;
    QSpinBox * spin;
    QSlider * slider;
    QPushButton * about;
    QPushButton * close;
    QCheckBox * check;

    QVBoxLayout * mainLayout;
    QHBoxLayout * hTopLayout;
    QHBoxLayout * hBottomLayout;


};
#endif // HELLOQT_H
