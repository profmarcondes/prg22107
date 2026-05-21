#include "qtgraphics.h"

QtGraphics::QtGraphics(QWidget *parent)
    : QWidget(parent)
{

    scene = new QGraphicsScene;

    el1 = scene->addEllipse(-25,-50,50,100);
    el1->setRotation(-30);
    el1->setPen(QPen("red"));
    el1->setBrush(QBrush(QColor(0,255,0)));
    el1->setZValue(10);
    el1->setFlag(QGraphicsItem::ItemIsMovable, true);

    el2 = scene->addEllipse(-25,-50,50,100);

    rect1 = scene->addRect(0,0,100,100);
    rect2 = scene->addRect(0,0,100,100);
    rect2->setRotation(45);

    x_axis = scene->addLine(-300,0,300,0);
    y_axis = scene->addLine(0,-300,0,300);

    view = new QGraphicsView(scene);

    angle = new QSlider(Qt::Horizontal);
    angle->setRange(-360, 360);
    QObject::connect(angle, SIGNAL(valueChanged(int)), this, SLOT(setRotation(int)));

    layout = new QVBoxLayout;
    layout->addWidget(view);
    layout->addWidget(angle);

    setLayout(layout);
}

QtGraphics::~QtGraphics() {}

void QtGraphics::setRotation(int value)
{
    el1->setRotation(value);
}
