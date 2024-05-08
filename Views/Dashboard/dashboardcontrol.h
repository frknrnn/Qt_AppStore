#ifndef DASHBOARDCONTROL_H
#define DASHBOARDCONTROL_H

#include <QFrame>
#include <QVBoxLayout>
#include "Views/VersionListView/versionlistview.h"
namespace Ui {
class Dashboardcontrol;
}

class Dashboardcontrol : public QFrame
{
    Q_OBJECT

public:
    explicit Dashboardcontrol(QWidget *parent = nullptr);
    ~Dashboardcontrol();

    void ShowSelectedAppVersionListView(QString appName);
    void ShowAppDashboard();

private:
    Ui::Dashboardcontrol *ui; 
    void CreateApps();
    void CreateVersionListOfApp(QString appName);

    QVBoxLayout *DashBoardLayout;
    QVBoxLayout *VersionListLayout;
    VersionListView *ActiveVersionListView;
};

#endif // DASHBOARDCONTROL_H
