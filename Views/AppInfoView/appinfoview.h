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
    bool m_dragging;
    QPoint m_dragStartPosition;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;


private slots:
    void minimizeWindow();
    void closeWindow();

};

#endif // APPINFOVIEW_H
