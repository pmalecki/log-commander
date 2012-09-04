#include "widget.h"
#include "ui_widget.h"
#include <QtGui/qmdiarea.h>


struct Widget::Private
{
    QMdiArea *area;

};


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget), d(new Private)
{
    ui->setupUi(this);
    d->area = ui->mdiArea;
}

Widget::~Widget()
{
    delete d;
    delete ui;
}


MdiChild *Widget::createMdiChild()
{
    MdiChild *child = new MdiChild;
    d->area->
}
