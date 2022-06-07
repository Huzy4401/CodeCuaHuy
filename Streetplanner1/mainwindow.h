#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QMessageBox>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QCheckBox>

#include "city.h"
#include "map.h"
#include "street.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_teste_was_clicked();

    void on_actionExit_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAbout_triggered();

    void on_testDrawCities_clicked();

    void on_testDrawMapWithCities_clicked();

    void on_testDrawStreets_clicked();

    void on_testDrawMapWithStreets_clicked();

    void on_CheckBoxCheck_clicked();

    void on_DialogOpen_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    Map map;
};
#endif // MAINWINDOW_H
