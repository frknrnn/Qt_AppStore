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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
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
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_app_icon;
    QLabel *label;
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
    QPushButton *pushButton_dashboard;
    QPushButton *pushButton_mySerialKeys;
    QPushButton *pushButton_myFavorites;
    QFrame *frame_leftMenuControl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_leftControl;
    QSpacerItem *verticalSpacer;
    QFrame *frame_base;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget_base;
    QWidget *page_dashboard;
    QHBoxLayout *horizontalLayout_7;
    QFrame *frame_dashboard;
    QWidget *page_serialKeys;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_serialKeys;
    QWidget *page_favorites;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_favorites;
    QWidget *page_loadingAnimation;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_loadingAnimation;
    QFrame *line_2;
    QFrame *frame_bottomBar;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_credits;
    QLabel *label_version;
    QFrame *frame_size_grip;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 640);
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
        frame_topBar->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_topBar->setFrameShape(QFrame::NoFrame);
        frame_topBar->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_topBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        frame_topBarApp = new QFrame(frame_topBar);
        frame_topBarApp->setObjectName("frame_topBarApp");
        frame_topBarApp->setMinimumSize(QSize(300, 0));
        frame_topBarApp->setMaximumSize(QSize(300, 16777215));
        frame_topBarApp->setFrameShape(QFrame::NoFrame);
        frame_topBarApp->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_topBarApp);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, 0, 0);
        label_app_icon = new QLabel(frame_topBarApp);
        label_app_icon->setObjectName("label_app_icon");
        label_app_icon->setMinimumSize(QSize(40, 40));
        label_app_icon->setMaximumSize(QSize(40, 40));
        label_app_icon->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        horizontalLayout_5->addWidget(label_app_icon);

        label = new QLabel(frame_topBarApp);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(246, 245, 244);\n"
"font: 700 13pt \"Ubuntu\";"));

        horizontalLayout_5->addWidget(label);


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
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 97, 0);"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::Shape::HLine);

        verticalLayout->addWidget(line);

        frame_main = new QFrame(centralwidget);
        frame_main->setObjectName("frame_main");
        frame_main->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 59, 59);"));
        frame_main->setFrameShape(QFrame::NoFrame);
        frame_main->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_main);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_leftMenu = new QFrame(frame_main);
        frame_leftMenu->setObjectName("frame_leftMenu");
        frame_leftMenu->setMinimumSize(QSize(200, 0));
        frame_leftMenu->setMaximumSize(QSize(200, 16777215));
        frame_leftMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 33, 33);"));
        frame_leftMenu->setFrameShape(QFrame::NoFrame);
        frame_leftMenu->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_leftMenu);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_leftMenuContent = new QFrame(frame_leftMenu);
        frame_leftMenuContent->setObjectName("frame_leftMenuContent");
        frame_leftMenuContent->setMaximumSize(QSize(16777215, 16777215));
        frame_leftMenuContent->setStyleSheet(QString::fromUtf8(""));
        frame_leftMenuContent->setFrameShape(QFrame::NoFrame);
        frame_leftMenuContent->setFrameShadow(QFrame::Raised);
        pushButton_dashboard = new QPushButton(frame_leftMenuContent);
        pushButton_dashboard->setObjectName("pushButton_dashboard");
        pushButton_dashboard->setGeometry(QRect(10, 20, 150, 40));
        pushButton_dashboard->setMinimumSize(QSize(150, 40));
        pushButton_dashboard->setMaximumSize(QSize(150, 30));
        pushButton_dashboard->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_dashboard->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 700 11pt \"Ubuntu\";\n"
"background-image: url(:/icons/Assets/icons/Dashboard.png);\n"
"background-color:rgb(200, 69, 0);\n"
"border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"padding: 0px 10px 0px 10px;\n"
" background-repeat: no-repeat;\n"
"background-position: left center;\n"
"background-origin: content; \n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color:rgb(200, 69, 0);\n"
"}\n"
"\n"
"\n"
""));
        pushButton_mySerialKeys = new QPushButton(frame_leftMenuContent);
        pushButton_mySerialKeys->setObjectName("pushButton_mySerialKeys");
        pushButton_mySerialKeys->setGeometry(QRect(10, 70, 150, 40));
        pushButton_mySerialKeys->setMinimumSize(QSize(150, 40));
        pushButton_mySerialKeys->setMaximumSize(QSize(150, 40));
        pushButton_mySerialKeys->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_mySerialKeys->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 700 11pt \"Ubuntu\";\n"
"background-image: url(:/icons/Assets/icons/Key.png);\n"
"background-color:transparent;\n"
"border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"padding: 0px 10px 0px 10px;\n"
" background-repeat: no-repeat;\n"
"background-position: left center;\n"
"background-origin: content; \n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color:rgb(200, 69, 0);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_myFavorites = new QPushButton(frame_leftMenuContent);
        pushButton_myFavorites->setObjectName("pushButton_myFavorites");
        pushButton_myFavorites->setGeometry(QRect(10, 120, 150, 40));
        pushButton_myFavorites->setMinimumSize(QSize(150, 40));
        pushButton_myFavorites->setMaximumSize(QSize(150, 40));
        pushButton_myFavorites->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_myFavorites->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 700 11pt \"Ubuntu\";\n"
"background-image: url(:/icons/Assets/icons/Star.png);\n"
"background-color:transparent;\n"
"border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"border:none;\n"
"padding: 0px 10px 0px 10px;\n"
" background-repeat: no-repeat;\n"
"background-position: left center;\n"
"background-origin: content; \n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color:rgb(200, 69, 0);\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_4->addWidget(frame_leftMenuContent);

        frame_leftMenuControl = new QFrame(frame_leftMenu);
        frame_leftMenuControl->setObjectName("frame_leftMenuControl");
        frame_leftMenuControl->setMinimumSize(QSize(20, 0));
        frame_leftMenuControl->setMaximumSize(QSize(20, 16777215));
        frame_leftMenuControl->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 59, 59);"));
        frame_leftMenuControl->setFrameShape(QFrame::NoFrame);
        frame_leftMenuControl->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_leftMenuControl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_leftControl = new QPushButton(frame_leftMenuControl);
        pushButton_leftControl->setObjectName("pushButton_leftControl");
        pushButton_leftControl->setMinimumSize(QSize(20, 100));
        pushButton_leftControl->setMaximumSize(QSize(20, 100));
        pushButton_leftControl->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_leftControl->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/icons/Assets/icons/leftArrow.png);\n"
"background-color: rgb(37, 33, 33);\n"
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
        verticalLayout_3 = new QVBoxLayout(frame_base);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget_base = new QStackedWidget(frame_base);
        stackedWidget_base->setObjectName("stackedWidget_base");
        page_dashboard = new QWidget();
        page_dashboard->setObjectName("page_dashboard");
        horizontalLayout_7 = new QHBoxLayout(page_dashboard);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        frame_dashboard = new QFrame(page_dashboard);
        frame_dashboard->setObjectName("frame_dashboard");
        frame_dashboard->setFrameShape(QFrame::NoFrame);
        frame_dashboard->setFrameShadow(QFrame::Raised);

        horizontalLayout_7->addWidget(frame_dashboard);

        stackedWidget_base->addWidget(page_dashboard);
        page_serialKeys = new QWidget();
        page_serialKeys->setObjectName("page_serialKeys");
        verticalLayout_4 = new QVBoxLayout(page_serialKeys);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame_serialKeys = new QFrame(page_serialKeys);
        frame_serialKeys->setObjectName("frame_serialKeys");
        frame_serialKeys->setFrameShape(QFrame::NoFrame);
        frame_serialKeys->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frame_serialKeys);

        stackedWidget_base->addWidget(page_serialKeys);
        page_favorites = new QWidget();
        page_favorites->setObjectName("page_favorites");
        verticalLayout_5 = new QVBoxLayout(page_favorites);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frame_favorites = new QFrame(page_favorites);
        frame_favorites->setObjectName("frame_favorites");
        frame_favorites->setFrameShape(QFrame::NoFrame);
        frame_favorites->setFrameShadow(QFrame::Raised);

        verticalLayout_5->addWidget(frame_favorites);

        stackedWidget_base->addWidget(page_favorites);
        page_loadingAnimation = new QWidget();
        page_loadingAnimation->setObjectName("page_loadingAnimation");
        verticalLayout_6 = new QVBoxLayout(page_loadingAnimation);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frame_loadingAnimation = new QFrame(page_loadingAnimation);
        frame_loadingAnimation->setObjectName("frame_loadingAnimation");
        frame_loadingAnimation->setFrameShape(QFrame::NoFrame);
        frame_loadingAnimation->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(frame_loadingAnimation);

        stackedWidget_base->addWidget(page_loadingAnimation);

        verticalLayout_3->addWidget(stackedWidget_base);


        horizontalLayout_3->addWidget(frame_base);


        verticalLayout->addWidget(frame_main);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 97, 0);"));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        frame_bottomBar = new QFrame(centralwidget);
        frame_bottomBar->setObjectName("frame_bottomBar");
        frame_bottomBar->setMinimumSize(QSize(0, 30));
        frame_bottomBar->setMaximumSize(QSize(16777215, 30));
        frame_bottomBar->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 26, 26);"));
        frame_bottomBar->setFrameShape(QFrame::NoFrame);
        frame_bottomBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_bottomBar);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(15, 0, 0, 0);
        label_credits = new QLabel(frame_bottomBar);
        label_credits->setObjectName("label_credits");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        label_credits->setFont(font);
        label_credits->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100);"));

        horizontalLayout_6->addWidget(label_credits);

        label_version = new QLabel(frame_bottomBar);
        label_version->setObjectName("label_version");
        label_version->setMaximumSize(QSize(100, 16777215));
        label_version->setFont(font);
        label_version->setStyleSheet(QString::fromUtf8("color: rgb(98, 103, 111);"));
        label_version->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_version);

        frame_size_grip = new QFrame(frame_bottomBar);
        frame_size_grip->setObjectName("frame_size_grip");
        frame_size_grip->setMaximumSize(QSize(20, 20));
        frame_size_grip->setCursor(QCursor(Qt::SizeFDiagCursor));
        frame_size_grip->setStyleSheet(QString::fromUtf8("QSizeGrip {\n"
"	background-image: url(:/icons/Assets/icons/cil-size-grip.png);\n"
"	background-position: center;\n"
"	background-repeat: no-reperat;\n"
"}"));
        frame_size_grip->setFrameShape(QFrame::NoFrame);
        frame_size_grip->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(frame_size_grip);


        verticalLayout->addWidget(frame_bottomBar);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pushButton_minimize->setDefault(false);
        pushButton_maximize->setDefault(false);
        pushButton_exit->setDefault(false);
        stackedWidget_base->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_app_icon->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Software Center App", nullptr));
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
        pushButton_dashboard->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton_mySerialKeys->setText(QCoreApplication::translate("MainWindow", "        My Serials", nullptr));
        pushButton_myFavorites->setText(QCoreApplication::translate("MainWindow", "       Favorites", nullptr));
        pushButton_leftControl->setText(QString());
        label_credits->setText(QCoreApplication::translate("MainWindow", "Registered by: F. Eren", nullptr));
        label_version->setText(QCoreApplication::translate("MainWindow", "v1.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
