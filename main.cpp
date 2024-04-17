#include "mainwindow.h"
#include <QSplashScreen>
#include <QTimer>
#include <QApplication>
#include <QScreen> // Ekranın boyutunu almak için

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Splash Screen'i yükle
    int splashWidth = 600;
    int splashHeight = 400;
    QSplashScreen splash(QPixmap(":/images/Assets/Images/SampleSplash.jpeg").scaled(splashWidth,splashHeight)); // Ekranı istediğiniz bir resimle değiştirin


    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int centerX = (screenGeometry.width()-splashWidth)/2;
    int centerY = (screenGeometry.height()-splashHeight)/2;

    splash.setGeometry(centerX, centerY, splashWidth, splashHeight);
    splash.show();

    // Ana pencere için hazırlık yap
    MainWindow mainWin;
    mainWin.setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint); // Üst çubuk ve kenarlıkları kaldırır

    centerX = (screenGeometry.width()-mainWin.width())/2;
    centerY = (screenGeometry.height()-mainWin.height())/2;

    mainWin.setGeometry(centerX, centerY, mainWin.width(), mainWin.height());

    QTimer::singleShot(3000, &splash, &QWidget::close); // 5 saniye sonra splash screen'i kapat
    QTimer::singleShot(3000, &mainWin, &QWidget::show); // 5 saniye sonra ana pencereyi göster


    return app.exec();
}
