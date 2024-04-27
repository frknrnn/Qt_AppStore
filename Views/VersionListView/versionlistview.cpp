#include "versionlistview.h"
#include "ui_versionlistview.h"
#include <QListWidgetItem>
#include "Views/AppListItem/applistitem.h"

VersionListView::VersionListView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::VersionListView)
{
    ui->setupUi(this);

    connect(ui->pushButton_backButton,&QPushButton::clicked,this,&VersionListView::Back);

    ui->listWidget->setSpacing(15);
    ui->listWidget->setStyleSheet("QListWidget::item:hover {background-color:transparent;}");
    ui->listWidget->setFocusPolicy(Qt::NoFocus);
    ui->listWidget->setSelectionMode(QAbstractItemView::NoSelection);

    AddItem();
}

VersionListView::~VersionListView()
{
    delete ui;
}

void VersionListView::Back()
{
    emit BackButtonClickedSignal();
}

void VersionListView::AddItem()
{
    AppListItem *temp1 = new AppListItem();

    QListWidgetItem *tempListWidget = new QListWidgetItem();
    tempListWidget->setSizeHint(tempListWidget->sizeHint());
    ui->listWidget->addItem(tempListWidget);
    ui->listWidget->setItemWidget(tempListWidget, temp1);

    AppListItem *temp2 = new AppListItem();

    QListWidgetItem *tempListWidget1 = new QListWidgetItem();
    tempListWidget1->setSizeHint(tempListWidget1->sizeHint());
    ui->listWidget->addItem(tempListWidget1);
    ui->listWidget->setItemWidget(tempListWidget1, temp2);

}

