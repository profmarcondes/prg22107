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
    QPushButton * button;
    QSpinBox * spin;
    QSlider * slider;
    QVBoxLayout * mainLayout;
};
#endif // HELLOQT_H
