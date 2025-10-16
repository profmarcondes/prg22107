
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QWidget * janela = new QWidget;
    janela->setWindowTitle("helloQT");

    QLabel * label = new QLabel("<h2>Hello <font color=\"red\">QT</font>!</h2>");
    label->setAlignment((Qt::AlignHCenter | Qt::AlignVCenter));

    QPushButton * button = new QPushButton("Sair");
    QObject::connect(button, SIGNAL(clicked(bool)), &app, SLOT(quit()));

    QVBoxLayout * mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addWidget(button);

    janela->setLayout(mainLayout);
    janela->setFixedSize(300,100);
    janela->show();
    return app.exec();

}
