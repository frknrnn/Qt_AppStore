#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool m_dragging;
    bool m_isLeftMenuExpand;
    QPoint m_dragStartPosition;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    void updateLeftControlButtonUi(bool isExtend);
    void bindingCustomFrames();

private slots:
    void leftMenuControl();
    void minimizeWindow();
    void exitApp();
    void maximizeWindow();
    void ShowDashboard();
    void ShowFavorites();
    void ShowKeys();
    void ShowAdminPanel();

};
#endif // MAINWINDOW_H
