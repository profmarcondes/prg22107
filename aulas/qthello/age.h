#ifndef AGE_H
#define AGE_H

#include <QtWidgets>

class Age : public QWidget {
    Q_OBJECT

public:
    Age(QWidget *parent = nullptr);

private:
    QSpinBox    * spin;
    QSlider     * slider;
    QHBoxLayout * layout;

};

#endif // AGE_H
