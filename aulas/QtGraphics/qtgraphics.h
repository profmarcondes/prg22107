#ifndef QTGRAPHICS_H
#define QTGRAPHICS_H

#include <QtWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QGraphicsRectItem>
#include <QGraphicsLineItem>

class QtGraphics : public QWidget
{
    Q_OBJECT

public:
    QtGraphics(QWidget *parent = nullptr);
    ~QtGraphics();

public slots:
    void setRotation(int value);

private:
    QGraphicsScene * scene;
    QGraphicsEllipseItem * el1;
    QGraphicsEllipseItem * el2;
    QGraphicsRectItem * rect1;
    QGraphicsRectItem * rect2;
    QGraphicsLineItem   * x_axis;
    QGraphicsLineItem   * y_axis;
    QGraphicsView * view;

    QSlider * angle;

    QVBoxLayout * layout;

};
#endif // QTGRAPHICS_H
