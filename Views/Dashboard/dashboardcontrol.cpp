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

    QVBoxLayout *dashBoardLayout = new QVBoxLayout(ui->page_AppList);

    AppView *sampleApp1 = new AppView();
    sampleApp1->SetAppName("Deneme1");

    connect(sampleApp1,&AppView::ShowAppVersionListSignal,this,&Dashboardcontrol::ShowSelectedAppVersionListView);


    AppView *sampleApp2 = new AppView();
    sampleApp2->SetAppName("Deneme2");

    dashBoardLayout->addWidget(sampleApp1);
    dashBoardLayout->addWidget(sampleApp2);

    QSpacerItem *verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    dashBoardLayout->addItem(verticalSpacer);

    ui->stackedWidget->setCurrentIndex(0);

    QVBoxLayout *versionListLayout = new QVBoxLayout(ui->page_VersionList);
    VersionListView *sampleVersionList = new VersionListView();

    versionListLayout->addWidget(sampleVersionList);

}



Dashboardcontrol::~Dashboardcontrol()
{
    delete ui;
}

void Dashboardcontrol::ShowSelectedAppVersionListView()
{
    ui->stackedWidget->setCurrentIndex(1);
}
