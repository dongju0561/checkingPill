#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loadImage_btn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open A File","C://img");
    QString url = fileName;
    QPixmap img(url);
    int w = ui->ImageViewer->width();
    int h = ui->ImageViewer->height();

    ui->ImageViewer->setPixmap(img.scaled(w,h,Qt::KeepAspectRatio));

}

