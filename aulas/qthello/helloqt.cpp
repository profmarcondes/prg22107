#include "helloqt.h"

HelloQT::HelloQT(QWidget *parent)
    : QWidget(parent) {

    label = new QLabel("<h1>Hello <font color=red>Qt !</font></h1>");
    quitBtn = new QPushButton("Quit Application");
    QObject::connect(quitBtn, SIGNAL(clicked()), qApp, SLOT(quit()));
    aboutBtn = new QPushButton("About");
    QObject::connect(aboutBtn, SIGNAL(clicked()), qApp, SLOT(aboutQt()));

    ageWidget = new Age;

    btnLayout = new QHBoxLayout();
    btnLayout->addWidget(quitBtn);
    btnLayout->addStretch();
    btnLayout->addWidget(aboutBtn);

    mainLayout = new QVBoxLayout();
    mainLayout->addWidget(label);
    mainLayout->addWidget(ageWidget);
    mainLayout->addLayout(btnLayout);

    this->setLayout(mainLayout);
}

HelloQT::~HelloQT() {}
