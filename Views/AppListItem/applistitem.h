#ifndef APPLISTITEM_H
#define APPLISTITEM_H
#include "Models/versionitem.h"
#include <QFrame>

namespace Ui {
class AppListItem;
}

class AppListItem : public QFrame
{
    Q_OBJECT

public:
    explicit AppListItem(QWidget *parent = nullptr);
    ~AppListItem();
    void SetVersionItem(VersionItem *versionItem);

private:
    Ui::AppListItem *ui;
    VersionItem *m_versionItem;
    void AddFavorite();
    void UpdateUi();
    void UpdateFavoriteButtonUi();

private slots:
    void showInfo();

};

#endif // APPLISTITEM_H
