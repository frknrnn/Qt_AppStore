QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Views/AppView/appview.cpp \
    Styles/customstyles.cpp \
    Views/Dashboard/dashboardcontrol.cpp \
    main.cpp \
    mainwindow.cpp \
    Views/VersionListView/versionlistview.cpp

HEADERS += \
    Views/AppView/appview.h \
    Styles/customstyles.h \
    Views/Dashboard/dashboardcontrol.h \
    mainwindow.h \
    Views/VersionListView/versionlistview.h

FORMS += \
    Views/AppView/appview.ui \
    Views/Dashboard/dashboardcontrol.ui \
    mainwindow.ui \
    Views/VersionListView/versionlistview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Assets/Images/SampleSplash.jpeg

RESOURCES += \
    resources.qrc
