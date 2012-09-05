#include "widget.h"
#include "ui_widget.h"
#include <QtGui/qmdiarea.h>
#include <QString>
#include <string>
#include <QMenu>
#include <iostream>
#include "menu/custommenu.h"


struct Widget::Private
{
    QMdiArea *area;
    CustomMenu *menu;

};

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget), d(new Private)
{
    ui->setupUi(this);
    d->area = ui->mdiArea;
    createMenu();
}

Widget::~Widget()
{
    delete d;
    delete ui;
}


MdiChild *Widget::createMdiChild()
{
    MdiChild *child = new MdiChild;

}

void Widget::on_mdiArea_customContextMenuRequested(const QPoint &pos)
{
    QPoint p = ui->mdiArea->mapToGlobal(pos);
    d->menu->exec(p);
}

void Widget::createMenu()
{
    d->menu = new CustomMenu(d->area);
}
