#ifndef APPVIEW_H
#define APPVIEW_H

#include <QFrame>
#include "Models/AppManager/softwareappmodel.h"

namespace Ui {
class AppView;
}

class AppView : public QFrame
{
    Q_OBJECT

public:
    explicit AppView(QWidget *parent = nullptr);
    ~AppView();
    SoftwareAppModel* app;
    void SetApp(SoftwareAppModel *app);
    QString AppName;

signals:
    void ShowAppVersionListSignal(QString appName);


protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    Ui::AppView *ui;
};

#endif // APPVIEW_H
