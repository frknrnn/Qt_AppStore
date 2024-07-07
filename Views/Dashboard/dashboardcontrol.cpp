#include "dashboardcontrol.h"
#include "ui_dashboardcontrol.h"
#include "Models/modelmanager.h"
#include "Models/AppManager/appmanager.h"
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
    CreateApps();

}

void Dashboardcontrol::CreateApps()
{
    QList<SoftwareAppModel>* apps = ModelManager::getInstance()->m_AppManager->Apps;
    if (apps) {
        for (int i = 0; i < apps->count(); i++) {
            AppView *tempAppView = new AppView();
            tempAppView->SetApp(&(*apps)[i]);
            connect(tempAppView, &AppView::ShowAppVersionListSignal, this, &Dashboardcontrol::ShowSelectedAppVersionListView);
            DashBoardLayout->addWidget(tempAppView);
        }
    }

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


