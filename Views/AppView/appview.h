#ifndef APPVIEW_H
#define APPVIEW_H

#include <QFrame>


namespace Ui {
class AppView;
}

class AppView : public QFrame
{
    Q_OBJECT

public:
    explicit AppView(QWidget *parent = nullptr);
    ~AppView();
    QString AppName;
    void SetAppName(QString appName);

signals:
    void ShowAppVersionListSignal(QString appName);


protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::AppView *ui;
};

#endif // APPVIEW_H
