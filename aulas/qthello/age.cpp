#include "age.h"

Age::Age(QWidget *parent)
    : QWidget{parent} {

    spin = new QSpinBox;
    slider = new QSlider(Qt::Horizontal);
    spin->setRange(0, 130);
    slider->setRange(0,130);

    QObject::connect(spin, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spin, SLOT(setValue(int)));
    spin->setValue(20);

    layout = new QHBoxLayout;
    layout->addWidget(spin);
    layout->addWidget(slider);

    setLayout(layout);

}
