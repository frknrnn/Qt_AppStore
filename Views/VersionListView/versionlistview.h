#ifndef VERSIONLISTVIEW_H
#define VERSIONLISTVIEW_H

#include <QFrame>

namespace Ui {
class VersionListView;
}

class VersionListView : public QFrame
{
    Q_OBJECT

public:
    explicit VersionListView(QWidget *parent = nullptr);
    ~VersionListView();

private:
    Ui::VersionListView *ui;
};

#endif // VERSIONLISTVIEW_H
