#include "appview.h"
#include "ui_appview.h"

AppView::AppView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::AppView)
{
    ui->setupUi(this);
}

AppView::~AppView()
{
    delete ui;
}
