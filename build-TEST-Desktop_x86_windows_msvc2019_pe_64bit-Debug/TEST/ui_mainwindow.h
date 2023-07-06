/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *loadImage_btn;
    QPushButton *Test_btn;
    QLabel *ImageViewer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *RGB;
    QLabel *Info;
    QHBoxLayout *horizontalLayout_3;
    QLabel *height;
    QLabel *heightLbl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *width;
    QLabel *widthLbl;
    QHBoxLayout *horizontalLayout;
    QLabel *name;
    QLabel *nameLbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Devanagari"));
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loadImage_btn = new QPushButton(centralwidget);
        loadImage_btn->setObjectName(QString::fromUtf8("loadImage_btn"));
        loadImage_btn->setGeometry(QRect(40, 40, 75, 23));
        Test_btn = new QPushButton(centralwidget);
        Test_btn->setObjectName(QString::fromUtf8("Test_btn"));
        Test_btn->setGeometry(QRect(40, 80, 75, 23));
        ImageViewer = new QLabel(centralwidget);
        ImageViewer->setObjectName(QString::fromUtf8("ImageViewer"));
        ImageViewer->setGeometry(QRect(150, 40, 411, 451));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(580, 50, 160, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RGB = new QLabel(verticalLayoutWidget);
        RGB->setObjectName(QString::fromUtf8("RGB"));

        verticalLayout->addWidget(RGB);

        Info = new QLabel(verticalLayoutWidget);
        Info->setObjectName(QString::fromUtf8("Info"));

        verticalLayout->addWidget(Info);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        height = new QLabel(verticalLayoutWidget);
        height->setObjectName(QString::fromUtf8("height"));

        horizontalLayout_3->addWidget(height);

        heightLbl = new QLabel(verticalLayoutWidget);
        heightLbl->setObjectName(QString::fromUtf8("heightLbl"));

        horizontalLayout_3->addWidget(heightLbl);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        width = new QLabel(verticalLayoutWidget);
        width->setObjectName(QString::fromUtf8("width"));

        horizontalLayout_2->addWidget(width);

        widthLbl = new QLabel(verticalLayoutWidget);
        widthLbl->setObjectName(QString::fromUtf8("widthLbl"));

        horizontalLayout_2->addWidget(widthLbl);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name = new QLabel(verticalLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        nameLbl = new QLabel(verticalLayoutWidget);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));

        horizontalLayout->addWidget(nameLbl);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loadImage_btn->setText(QCoreApplication::translate("MainWindow", "Load image", nullptr));
        Test_btn->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        ImageViewer->setText(QString());
        RGB->setText(QCoreApplication::translate("MainWindow", "RGB", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        height->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        heightLbl->setText(QString());
        width->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        widthLbl->setText(QString());
        name->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        nameLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
