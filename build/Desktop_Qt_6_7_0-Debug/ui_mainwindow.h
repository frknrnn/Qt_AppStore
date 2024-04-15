/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_topBar;
    QFrame *frame_main;
    QFrame *frame_bottomBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_topBar = new QFrame(centralwidget);
        frame_topBar->setObjectName("frame_topBar");
        frame_topBar->setMaximumSize(QSize(16777215, 50));
        frame_topBar->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);"));
        frame_topBar->setFrameShape(QFrame::NoFrame);
        frame_topBar->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_topBar);

        frame_main = new QFrame(centralwidget);
        frame_main->setObjectName("frame_main");
        frame_main->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        frame_main->setFrameShape(QFrame::NoFrame);
        frame_main->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_main);

        frame_bottomBar = new QFrame(centralwidget);
        frame_bottomBar->setObjectName("frame_bottomBar");
        frame_bottomBar->setMaximumSize(QSize(16777215, 50));
        frame_bottomBar->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);"));
        frame_bottomBar->setFrameShape(QFrame::NoFrame);
        frame_bottomBar->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_bottomBar);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
