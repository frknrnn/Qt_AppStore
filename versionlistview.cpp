#include "versionlistview.h"
#include "ui_versionlistview.h"

VersionListView::VersionListView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::VersionListView)
{
    ui->setupUi(this);
}

VersionListView::~VersionListView()
{
    delete ui;
}
