#include "helloqt.h"

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel("<h2>Hello QT!</h2>");

    button = new QPushButton("Quit");
    QObject::connect(button, SIGNAL(clicked()), qApp, SLOT(quit()));

    spin = new QSpinBox();
    slider = new QSlider(Qt::Horizontal);

    spin->setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(spin, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spin, SLOT(setValue(int)));

    spin->setValue(30);

    mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addWidget(button);
    mainLayout->addWidget(spin);
    mainLayout->addWidget(slider);

    setLayout(mainLayout);
}

HelloQT::~HelloQT() {}
