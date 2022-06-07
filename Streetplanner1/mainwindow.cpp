#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , scene(new QGraphicsScene)
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_teste_was_clicked()
{
    QString pattern = "The user's input: %1";
    double num;
    QString eingabe = ui->lineEdit_teste_was->text();
    bool eingabeIsEineZahl;
    num = eingabe.toDouble(&eingabeIsEineZahl);
    if(!eingabeIsEineZahl)
    {
        QString pattern = "The user's input: %1";
        QString s = pattern.arg(eingabe);
        qDebug() << s;
        scene.addEllipse(rand()*9/RAND_MAX, rand()*9/RAND_MAX, 10, 10, QPen(Qt::black), QBrush(Qt::red));
    }
    else
    {
        QString pattern = "The user's input + 4: %1";
        qDebug() << pattern.arg(num+4);
        scene.addRect(rand()*9/RAND_MAX, rand()*9/RAND_MAX, 10, 10, QPen (Qt :: black), QBrush(Qt::blue));
    }
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionClear_Scene_triggered()
{
    scene.clear();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox;
    msgBox.about(this, "Developer", "Huzy");
}


void MainWindow::on_testDrawCities_clicked()
{
    City c1("city c1", 20,50);
    c1.draw(scene);
}


void MainWindow::on_testDrawMapWithCities_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c2", 50, 20);
    City c3("city c3", 0, 0);
    map.addCity(&c1);
    map.addCity(&c2);
    map.addCity(&c3);
    map.draw(scene);
}


void MainWindow::on_testDrawStreets_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c2", 50, 20);
    Street street(&c1, &c2);
    street.draw(scene);
}


void MainWindow::on_testDrawMapWithStreets_clicked()
{
    City c1("city c1", 20,50);
    City c2("city c2", 50, 20);
    City c3("city c3", 0, 0);
    Street street12(&c1, &c2);
    Street street13(&c1, &c3);
    Street street23(&c2, &c3);
    map.addCity(&c1);
    map.addCity(&c2);
    map.addStreet(&street12);
    map.addStreet(&street13);
    map.addStreet(&street23);
    map.draw(scene);
}

void MainWindow::on_CheckBoxCheck_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this, "title", "Checked");
        ui->pushButton_teste_was->hide();
        ui->lineEdit_teste_was->hide();
        ui->testDrawCities->hide();
        ui->testDrawMapWithCities->hide();
        ui->testDrawStreets->hide();
        ui->testDrawMapWithStreets->hide();

    }
    else
    {
        QMessageBox::information(this, "title", "isnotChecked");
        ui->pushButton_teste_was->show();
        ui->lineEdit_teste_was->show();
        ui->testDrawCities->show();
        ui->testDrawMapWithCities->show();
        ui->testDrawStreets->show();
        ui->testDrawMapWithStreets->show();
    }
}

void MainWindow::on_DialogOpen_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}

