#ifndef CUSTOMMENU_H
#define CUSTOMMENU_H

#include <QMenu>

class CustomMenu : public QMenu
{


    Q_OBJECT

    struct Private;
    Private* d;



public:
    explicit CustomMenu(QWidget *parent = 0);
    ~CustomMenu();
    void createMenu();
    
signals:
    
public slots:
    
};

#endif // CUSTOMMENU_H
