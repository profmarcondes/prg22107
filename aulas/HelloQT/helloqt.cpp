#include "helloqt.h"

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent)
{
    check = new QCheckBox("check");

    label = new QLabel("<h2>HelloQT</h2>");

    close = new QPushButton("Close");
    QObject::connect(close, SIGNAL(clicked()),
                     this, SLOT(close()));

    about = new QPushButton("About");
    QObject::connect(about, SIGNAL(clicked()),
                     this, SLOT(close()));

    spin = new QSpinBox();
    slider = new QSlider(Qt::Horizontal);
    spin->setRange(0,100);
    slider->setRange(0,100);

    QObject::connect(spin, SIGNAL(valueChanged(int)),
                     slider, SLOT(setValue(int)));

    QObject::connect(slider, SIGNAL(valueChanged(int)),
                     spin, SLOT(setValue(int)));

    mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addWidget(slider);

    hTopLayout = new QHBoxLayout();
    hTopLayout->addWidget(spin);
    hTopLayout->addWidget(check);

    mainLayout->addLayout(hTopLayout);

    hBottomLayout = new QHBoxLayout();
    hBottomLayout->addWidget(about);
    hBottomLayout->addWidget(close);

    mainLayout->addLayout(hBottomLayout);

    setLayout(mainLayout);

}

HelloQT::~HelloQT() {}
