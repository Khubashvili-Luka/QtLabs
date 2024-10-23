#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_task1_clicked()
{
    QMessageBox::information(this,  "TASK 1", "task1 clicked");
}


void MainWindow::on_task2_clicked()
{
    QMessageBox::information(this,  "TASK 2", "task2 clicked");
}


void MainWindow::on_task3_clicked()
{
    QMessageBox::information(this,  "TASK 3", "task3 clicked");
}


void MainWindow::on_task4_clicked()
{
    QMessageBox::information(this,  "TASK 4", "task4 clicked");
}


void MainWindow::on_account_exit_triggered() {
    reset_settings();

    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
