#ifndef APPLISTITEM_H
#define APPLISTITEM_H

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

private:
    Ui::AppListItem *ui;
};

#endif // APPLISTITEM_H
