#include "mainwindow.h"
#include <QSplashScreen>
#include <QTimer>
#include <QApplication>
#include <QScreen> // Ekranın boyutunu almak için
#include <Models/modelmanager.h>
#include "Views/SplashScreen/splashscreen.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SplashScreen w;
    w.show();

    ModelManager *m_modelManager = ModelManager::getInstance();
    // Ana pencere için hazırlık yap
    MainWindow mainWin;

    return app.exec();
}
