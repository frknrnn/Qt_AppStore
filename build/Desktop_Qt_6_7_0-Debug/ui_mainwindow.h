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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_topBar;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_topBarApp;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_topBarWindowControl;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_minimize;
    QPushButton *pushButton_maximize;
    QPushButton *pushButton_exit;
    QFrame *line;
    QFrame *frame_main;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_leftMenu;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_leftMenuContent;
    QFrame *frame_leftMenuControl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_leftControl;
    QSpacerItem *verticalSpacer;
    QFrame *frame_base;
    QFrame *line_2;
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
        frame_topBar->setMinimumSize(QSize(0, 50));
        frame_topBar->setMaximumSize(QSize(16777215, 50));
        frame_topBar->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);"));
        frame_topBar->setFrameShape(QFrame::NoFrame);
        frame_topBar->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_topBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        frame_topBarApp = new QFrame(frame_topBar);
        frame_topBarApp->setObjectName("frame_topBarApp");
        frame_topBarApp->setMinimumSize(QSize(200, 0));
        frame_topBarApp->setMaximumSize(QSize(200, 16777215));
        frame_topBarApp->setFrameShape(QFrame::NoFrame);
        frame_topBarApp->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_topBarApp);

        horizontalSpacer = new QSpacerItem(467, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame_topBarWindowControl = new QFrame(frame_topBar);
        frame_topBarWindowControl->setObjectName("frame_topBarWindowControl");
        frame_topBarWindowControl->setMinimumSize(QSize(120, 0));
        frame_topBarWindowControl->setMaximumSize(QSize(120, 16777215));
        frame_topBarWindowControl->setFrameShape(QFrame::NoFrame);
        frame_topBarWindowControl->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_topBarWindowControl);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_minimize = new QPushButton(frame_topBarWindowControl);
        pushButton_minimize->setObjectName("pushButton_minimize");
        pushButton_minimize->setMinimumSize(QSize(30, 30));
        pushButton_minimize->setMaximumSize(QSize(30, 30));
        pushButton_minimize->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_minimize->setAutoFillBackground(false);
        pushButton_minimize->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/icons/Assets/icons/icon_minimize.png);\n"
"background-color: rgb(60, 60, 60);\n"
"border:none;\n"
"border-radius:15px;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgb(200, 200, 200);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"}"));
        pushButton_minimize->setAutoRepeat(false);
        pushButton_minimize->setAutoExclusive(false);
        pushButton_minimize->setAutoDefault(false);
        pushButton_minimize->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_minimize);

        pushButton_maximize = new QPushButton(frame_topBarWindowControl);
        pushButton_maximize->setObjectName("pushButton_maximize");
        pushButton_maximize->setMinimumSize(QSize(30, 30));
        pushButton_maximize->setMaximumSize(QSize(30, 30));
        pushButton_maximize->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_maximize->setAutoFillBackground(false);
        pushButton_maximize->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/icons/Assets/icons/icon_maximize.png);\n"
"background-color: rgb(60, 60, 60);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgb(200, 200, 200);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"}"));
        pushButton_maximize->setAutoRepeat(false);
        pushButton_maximize->setAutoExclusive(false);
        pushButton_maximize->setAutoDefault(false);
        pushButton_maximize->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_maximize);

        pushButton_exit = new QPushButton(frame_topBarWindowControl);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setMinimumSize(QSize(30, 30));
        pushButton_exit->setMaximumSize(QSize(30, 30));
        pushButton_exit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_exit->setAutoFillBackground(false);
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/icons/Assets/icons/cil-x.png);\n"
"background-color: rgb(60, 60, 60);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"border-radius:15px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgb(170, 0, 0);\n"
"border-radius:15px;\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"}"));
        pushButton_exit->setAutoRepeat(false);
        pushButton_exit->setAutoExclusive(false);
        pushButton_exit->setAutoDefault(false);
        pushButton_exit->setFlat(false);

        horizontalLayout_2->addWidget(pushButton_exit);


        horizontalLayout->addWidget(frame_topBarWindowControl);


        verticalLayout->addWidget(frame_topBar);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line);

        frame_main = new QFrame(centralwidget);
        frame_main->setObjectName("frame_main");
        frame_main->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        frame_main->setFrameShape(QFrame::NoFrame);
        frame_main->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_main);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_leftMenu = new QFrame(frame_main);
        frame_leftMenu->setObjectName("frame_leftMenu");
        frame_leftMenu->setMinimumSize(QSize(275, 0));
        frame_leftMenu->setMaximumSize(QSize(275, 16777215));
        frame_leftMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 41, 59);"));
        frame_leftMenu->setFrameShape(QFrame::NoFrame);
        frame_leftMenu->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_leftMenu);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_leftMenuContent = new QFrame(frame_leftMenu);
        frame_leftMenuContent->setObjectName("frame_leftMenuContent");
        frame_leftMenuContent->setFrameShape(QFrame::NoFrame);
        frame_leftMenuContent->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(frame_leftMenuContent);

        frame_leftMenuControl = new QFrame(frame_leftMenu);
        frame_leftMenuControl->setObjectName("frame_leftMenuControl");
        frame_leftMenuControl->setMinimumSize(QSize(20, 0));
        frame_leftMenuControl->setMaximumSize(QSize(20, 16777215));
        frame_leftMenuControl->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);"));
        frame_leftMenuControl->setFrameShape(QFrame::NoFrame);
        frame_leftMenuControl->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_leftMenuControl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        pushButton_leftControl = new QPushButton(frame_leftMenuControl);
        pushButton_leftControl->setObjectName("pushButton_leftControl");
        pushButton_leftControl->setMinimumSize(QSize(20, 50));
        pushButton_leftControl->setMaximumSize(QSize(20, 50));
        pushButton_leftControl->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/icons/Assets/icons/leftArrow.png);\n"
"background-color: rgb(46, 41, 59);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
" border-top-left-radius: 0;\n"
" border-top-right-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
" border-bottom-left-radius: 0px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color: rgb(119, 118, 123);\n"
"border:none;\n"
"background-repeat: no-repeat;\n"
"}"));

        verticalLayout_2->addWidget(pushButton_leftControl);

        verticalSpacer = new QSpacerItem(17, 436, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addWidget(frame_leftMenuControl);


        horizontalLayout_3->addWidget(frame_leftMenu);

        frame_base = new QFrame(frame_main);
        frame_base->setObjectName("frame_base");
        frame_base->setFrameShape(QFrame::NoFrame);
        frame_base->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_base);


        verticalLayout->addWidget(frame_main);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(98, 160, 234);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        frame_bottomBar = new QFrame(centralwidget);
        frame_bottomBar->setObjectName("frame_bottomBar");
        frame_bottomBar->setMinimumSize(QSize(0, 50));
        frame_bottomBar->setMaximumSize(QSize(16777215, 50));
        frame_bottomBar->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);"));
        frame_bottomBar->setFrameShape(QFrame::NoFrame);
        frame_bottomBar->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_bottomBar);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton_minimize->setDefault(false);
        pushButton_maximize->setDefault(false);
        pushButton_exit->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_minimize->setToolTip(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_minimize->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_maximize->setToolTip(QCoreApplication::translate("MainWindow", "Maximize", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_maximize->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_exit->setToolTip(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_exit->setText(QString());
        pushButton_leftControl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
