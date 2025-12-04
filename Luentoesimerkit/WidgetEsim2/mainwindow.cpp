#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "form1.h"
#include "form2.h"
#include "person.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnOpenForm1, &QPushButton::clicked, this, &MainWindow::openForm1);
    connect(ui->btnOpenForm2, &QPushButton::clicked, this, &MainWindow::openForm2);
    connect(ui->btnSetName, &QPushButton::clicked, this, &MainWindow::setName);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openForm1()
{
    qDebug() << "Form 1 avattu!";
    Form1 *objectForm1 = new Form1(this);
    objectForm1->open();
}

void MainWindow::openForm2()
{
    qDebug() << "Form 2 avattu!";
    form2 *objectForm2 = new form2(this);
    objectForm2->open();
}

void MainWindow::setName()
{
    Person *objectSingleton = Person::getInstance();
    objectSingleton->setName(ui->textName->text());
}
