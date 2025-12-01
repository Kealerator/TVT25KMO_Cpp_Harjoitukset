#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnTest2, &QPushButton::clicked, this, &MainWindow::on_btnTest2_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTest1_clicked()
{
    // qDebug() << "Klikkasit Test 1 painiketta.";
    ui->labelResult->setText("Klikkasit Test 1 painiketta!");
}

void MainWindow::on_btnTest2_clicked()
{
    QString name = ui->textName->text();
    ui->labelResult->setText("Terve " + name + "!");
}

