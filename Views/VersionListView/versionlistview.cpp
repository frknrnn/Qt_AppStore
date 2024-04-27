#include "versionlistview.h"
#include "ui_versionlistview.h"

VersionListView::VersionListView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::VersionListView)
{
    ui->setupUi(this);

    connect(ui->pushButton_backButton,&QPushButton::clicked,this,&VersionListView::Back);
}

VersionListView::~VersionListView()
{
    delete ui;
}

void VersionListView::Back()
{
    emit BackButtonClickedSignal();
}

