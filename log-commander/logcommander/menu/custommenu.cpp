#include "menu/custommenu.h"



struct CustomMenu::Private
{
    QAction *open;
    QAction *close;
    QAction *close_all;
    QAction *cascade;
};

CustomMenu::CustomMenu(QWidget *parent) :
    QMenu(parent), d(new Private)
{
    createMenu();
}

CustomMenu::~CustomMenu()
{
    delete d;
}

void CustomMenu::createMenu()
{
    d->open = this->addAction("Open");
    d->close = this->addAction("Close");
    d->close_all = this->addAction("Close all");
    this->addSeparator();
    d->cascade = this->addAction("Cascade");

}
