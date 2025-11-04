#include "helloqt.h"
#include <QApplication>

HelloQT::HelloQT(QWidget *parent) : QWidget(parent) {
    setWindowTitle("HelloQT");

    _mainLayout = new QVBoxLayout();

    _msg = new QLabel("<h1>Hello <font color=\"red\">QT</font>!</h1>");
    _msg->setAlignment((Qt::AlignHCenter | Qt::AlignVCenter));
    _mainLayout->addWidget(_msg);

    _spinLayout = new QHBoxLayout();
    _slider = new QSlider(Qt::Horizontal);
    _slider->setRange(0, 130);
    _spinLayout->addWidget(_slider);
    _spin = new QSpinBox();
    _spin->setRange(0,130);
    _spinLayout->addWidget(_spin);

    QObject::connect(_slider, SIGNAL(valueChanged(int)), _spin, SLOT(setValue(int)));
    QObject::connect(_spin, SIGNAL(valueChanged(int)), _slider, SLOT(setValue(int)));

    _spin->setValue(45);

    _mainLayout->addLayout(_spinLayout);

    _quitBtn = new QPushButton("Sair");
    QObject::connect(_quitBtn, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
    _mainLayout->addWidget(_quitBtn);


    setLayout(_mainLayout);
    setFixedSize(sizeHint());
}
