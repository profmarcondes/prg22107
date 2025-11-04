#ifndef HELLOQT_H
#define HELLOQT_H

//#include <QtWidgets>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QSlider>

class HelloQT : public QWidget {

    Q_OBJECT
public:
    explicit HelloQT(QWidget *parent = nullptr);

signals:

private:
    QLabel * _msg;
    QPushButton * _quitBtn;
    QVBoxLayout * _mainLayout;

    QHBoxLayout * _spinLayout;
    QSpinBox * _spin;
    QSlider * _slider;

};

#endif // HELLOQT_H
