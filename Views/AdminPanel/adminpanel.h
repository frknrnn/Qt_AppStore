#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QDialog>

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void CloseWindow();

private slots:
    void ShowDashboard();
    void ShowAddNewAppPanel();
    void ShowAddNewVersionPanel();

private:
    Ui::AdminPanel *ui;
    bool m_dragging;
    QPoint m_dragStartPosition;
};

#endif // ADMINPANEL_H
