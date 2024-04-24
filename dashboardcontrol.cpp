#include "dashboardcontrol.h"
#include "ui_dashboardcontrol.h"

Dashboardcontrol::Dashboardcontrol(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::Dashboardcontrol)
{
    ui->setupUi(this);
}

Dashboardcontrol::~Dashboardcontrol()
{
    delete ui;
}
