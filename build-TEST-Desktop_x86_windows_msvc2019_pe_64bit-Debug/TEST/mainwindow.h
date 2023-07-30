#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QFileSystemModel>
#include<QFileDialog>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QMouseEvent>
#include <QImage>
#include <QPainter>
#include <QLabel>
#include <QRect>
#include <QPixmap>

using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class ImageSelectionEventFilter : public QObject {
    Q_OBJECT

public:
    ImageSelectionEventFilter(QObject *parent = nullptr);

protected:
    bool eventFilter(QObject *obj, QEvent *event);

private:
    QPoint origin;
    QRect selectionRect;
    QPixmap originalPixmap;
    QPixmap displayPixmap;
    bool isDrawing;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void open();

protected:

private slots:
    void on_loadImage_btn_clicked();
    void on_Test_btn_clicked();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;

};
#endif // MAINWINDOW_H
