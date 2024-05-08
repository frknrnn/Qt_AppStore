#include "dashboardcontrol.h"
#include "ui_dashboardcontrol.h"
#include "Views/AppView/appview.h"
#include "Views/VersionListView/versionlistview.h"

#include "QVBoxLayout"
#include "QSpacerItem"

Dashboardcontrol::Dashboardcontrol(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::Dashboardcontrol)
{
    ui->setupUi(this);
    DashBoardLayout = new QVBoxLayout(ui->page_AppList);
    VersionListLayout = new QVBoxLayout(ui->page_VersionList);
    ui->stackedWidget->setCurrentIndex(0);
    CreateApps();

}



Dashboardcontrol::~Dashboardcontrol()
{
    delete ui;
}

void Dashboardcontrol::ShowSelectedAppVersionListView(QString appName)
{
    ui->stackedWidget->setCurrentIndex(1);
    CreateVersionListOfApp(appName);

}

void Dashboardcontrol::ShowAppDashboard()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void Dashboardcontrol::CreateApps()
{
    AppView *sampleApp1 = new AppView();
    sampleApp1->SetAppName("Deneme1");
    connect(sampleApp1,&AppView::ShowAppVersionListSignal,this,&Dashboardcontrol::ShowSelectedAppVersionListView);

    AppView *sampleApp2 = new AppView();
    sampleApp2->SetAppName("Deneme2");
    connect(sampleApp2,&AppView::ShowAppVersionListSignal,this,&Dashboardcontrol::ShowSelectedAppVersionListView);

    DashBoardLayout->addWidget(sampleApp1);
    DashBoardLayout->addWidget(sampleApp2);

    QSpacerItem *verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    DashBoardLayout->addItem(verticalSpacer);

}

void Dashboardcontrol::CreateVersionListOfApp(QString appName)
{
    if(ActiveVersionListView!=NULL){
        VersionListLayout->removeWidget(ActiveVersionListView);
    }

    this->ActiveVersionListView = new VersionListView();
    ActiveVersionListView->SetNavigatePathName(appName);
    connect(ActiveVersionListView,&VersionListView::BackButtonClickedSignal,this,&Dashboardcontrol::ShowAppDashboard);
    VersionListLayout->addWidget(ActiveVersionListView);
}


