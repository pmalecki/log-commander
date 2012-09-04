#ifndef MDICHILD_H
#define MDICHILD_H

#include <QTextEdit>

class MdiChild : public QTextEdit
{
    Q_OBJECT
public:
    explicit MdiChild(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // MDICHILD_H
