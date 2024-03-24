#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>

class Enemy: public QObject , public QGraphicsRectItem
{ Q_OBJECT
public:
    Enemy();

public slots:
    void move();
};

#endif // ENEMY_H