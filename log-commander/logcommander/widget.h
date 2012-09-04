#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mdichild.h"

class QMidiArea;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

    struct Private;
    Private* d;





public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private:
    Ui::Widget *ui;




private slots:

    MdiChild *createMdiChild();
    void setActiveSubWindow(QWidget *window);
};

#endif // WIDGET_H
