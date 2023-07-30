#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


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


void MainWindow::on_Test_btn_clicked()
{
    Mat img = imread("minion.jpg");

    Mat img_roi_1, img_roi_2;

    img_roi_1 = img(Rect(200, 200, 100, 100)); //Rect()함수로 원하는 지점 자르기 가능
    img_roi_2 = img(Rect(Point(300, 200),Point( 400, 300)));

    QImage qtImage(img_roi_2.data, img_roi_2.cols, img_roi_2.rows, img_roi_2.step, QImage::Format_RGB888);
    QPixmap pixmapImage = QPixmap::fromImage(qtImage);
    ui->ImageViewer->setPixmap(pixmapImage);

}

ImageSelectionEventFilter::ImageSelectionEventFilter(QObject *parent) : QObject(parent), isDrawing(false) {}

bool ImageSelectionEventFilter::eventFilter(QObject *obj, QEvent *event) {
    QLabel *label = qobject_cast<QLabel *>(obj);
    if (!label) {
        return false;
    }

    if (event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        originalPixmap = *label->pixmap();
        displayPixmap = originalPixmap;
        origin = mouseEvent->pos();
        selectionRect = QRect(origin, QSize());
        isDrawing = true;
    } else if (event->type() == QEvent::MouseMove && isDrawing) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
        selectionRect = QRect(origin, mouseEvent->pos()).normalized();
        displayPixmap = originalPixmap;
        QPainter painter(&displayPixmap);
        painter.setPen(QPen(Qt::red, 1, Qt::DashLine));
        painter.drawRect(selectionRect);
        label->setPixmap(displayPixmap);
    } else if (event->type() == QEvent::MouseButtonRelease && isDrawing) {
        isDrawing = false;
    }

    return false;
}

void MainWindow::on_pushButton_clicked()
{
    ImageSelectionEventFilter *filter = new ImageSelectionEventFilter();
    ui->ImageViewer->installEventFilter(filter);
}

