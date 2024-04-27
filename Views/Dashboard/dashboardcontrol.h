#ifndef DASHBOARDCONTROL_H
#define DASHBOARDCONTROL_H

#include <QFrame>

namespace Ui {
class Dashboardcontrol;
}

class Dashboardcontrol : public QFrame
{
    Q_OBJECT

public:
    explicit Dashboardcontrol(QWidget *parent = nullptr);
    ~Dashboardcontrol();

    void ShowSelectedAppVersionListView();
    void ShowAppDashboard();

private:
    Ui::Dashboardcontrol *ui;
};

#endif // DASHBOARDCONTROL_H
