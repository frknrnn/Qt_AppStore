#ifndef ADMINPASSVIEW_H
#define ADMINPASSVIEW_H

#include <QDialog>
#include "Views/AdminPanel/adminpanel.h"
namespace Ui {
class AdminPassView;
}

class AdminPassView : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPassView(QWidget *parent = nullptr);
    ~AdminPassView();
    QString pass = "fir.pir";


protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void ShakeWindow();
    void CloseWindow();

private:
    Ui::AdminPassView *ui;
    bool m_dragging;
    QPoint m_dragStartPosition;
    AdminPanel *m_adminPanel = new AdminPanel();


private slots:
    void ShowAdminPanel();
};

#endif // ADMINPASSVIEW_H
