#include "dashboardcontrol.h"
#include "ui_dashboardcontrol.h"
#include "Views/AppView/appview.h"

#include "QVBoxLayout"
#include "QSpacerItem"

Dashboardcontrol::Dashboardcontrol(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::Dashboardcontrol)
{
    ui->setupUi(this);

    QVBoxLayout *dashBoardLayout = new QVBoxLayout(ui->scrollArea);

    AppView *sampleApp1 = new AppView();
    sampleApp1->SetAppName("Deneme1");

    AppView *sampleApp2 = new AppView();
    sampleApp2->SetAppName("Deneme2");

    dashBoardLayout->addWidget(sampleApp1);
    dashBoardLayout->addWidget(sampleApp2);

    QSpacerItem *verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    dashBoardLayout->addItem(verticalSpacer);

}



Dashboardcontrol::~Dashboardcontrol()
{
    delete ui;
}
