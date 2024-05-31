QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += network
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Models/Database/databasehandler.cpp \
    Models/Database/databasemanager.cpp \
    Models/authhandler.cpp \
    Models/modelmanager.cpp \
    Models/softwareappmodel.cpp \
    Models/versionitem.cpp \
    Views/AppInfoView/appinfoview.cpp \
    Views/AppListItem/applistitem.cpp \
    Views/AppView/appview.cpp \
    Styles/customstyles.cpp \
    Views/Dashboard/dashboardcontrol.cpp \
    Views/Settings/settingspage.cpp \
    Views/SplashScreen/splashscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    Views/VersionListView/versionlistview.cpp

HEADERS += \
    Models/Database/databasehandler.h \
    Models/Database/databasemanager.h \
    Models/authhandler.h \   \
    Views/AppInfoView/appinfoview.h \
    Models/modelmanager.h \
    Models/softwareappmodel.h \
    Models/versionitem.h \
    Views/AppListItem/applistitem.h \
    Views/AppView/appview.h \
    Styles/customstyles.h \
    Views/Dashboard/dashboardcontrol.h \
    Views/Settings/settingspage.h \
    Views/SplashScreen/splashscreen.h \
    mainwindow.h \
    Views/VersionListView/versionlistview.h

FORMS += \
    Views/AppInfoView/appinfoview.ui \
    Views/AppListItem/applistitem.ui \
    Views/AppView/appview.ui \
    Views/Dashboard/dashboardcontrol.ui \
    Views/Settings/settingspage.ui \
    Views/SplashScreen/splashscreen.ui \
    mainwindow.ui \
    Views/VersionListView/versionlistview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Assets/Images/SampleSplash.jpeg \
    Assets/icons/settings.png

RESOURCES += \
    resources.qrc
