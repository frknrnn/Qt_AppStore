#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>
#include <QThread>
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QPoint>


namespace Ui {
class SplashScreen;
}

class SplashScreen : public QMainWindow
{
    Q_OBJECT

private slots:
    //void on_pushButton_quitLogin_clicked();
    //void on_pushButton_signup_clicked();
    //void on_pushButton_signupCancel_clicked();
    //void on_pushButton_signup_create_clicked();
    //void on_pushButton_login_clicked();
    //void on_pushButton_forgotPasswordCancel_clicked();
    //void on_pushButton_forgotPassword_clicked();
    //void on_pushButton_forgotPasswordSend_clicked();

public:
    explicit SplashScreen(QWidget *parent = nullptr);
    ~SplashScreen();


public slots:
    void OpenMainApp();

private:
    Ui::SplashScreen *ui;

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    //void initialUi();
    //bool checkNewUserInfo();
    void showLoadingPage();
    //void showLogin();
    //void showForgotPasswordPage();
    //void completeCreateNewUser();
    //void completeSignInUser();
    //void sendPasswordReset();
    //void completePasswordReset();
    //void errorPasswordReset();
    //void createNewUserError();
    //void createNewUser();
    //void signInUser();
    //void loginLabelInfoStyle(int status);



    int mouseClickMove_X;
    int mouseClickMove_Y;


    QString newUserName;
    QString newUserSurname;
    QString newUserEmail;
    QString newUserPassword;
    QString newUserConfirmPassword;

    QString userEmail;
    QString userPassword;

    QString resetPasswordEmail;

    QPropertyAnimation *loginPageAnimation;
    QPropertyAnimation *forgotPasswordPageAnimation;


};

#endif // SPLASHSCREEN_H
