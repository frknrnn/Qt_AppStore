#ifndef APPINFOVIEW_H
#define APPINFOVIEW_H

#include <QMainWindow>

namespace Ui {
class AppInfoView;
}

class AppInfoView : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppInfoView(QWidget *parent = nullptr);
    ~AppInfoView();

private:
    Ui::AppInfoView *ui;
};

#endif // APPINFOVIEW_H
