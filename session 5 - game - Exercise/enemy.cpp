#include "enemy.h"
#include <QGraphicsScene>
#include <stdlib.h> // rand() -> to generate really large integer
#include <QTimer>
#include <QDebug>
#include "player.h"
#include "gameover.h"


Enemy::Enemy() {
        // *******  Setting the size of the enemy ********
    setRect(0,0,100,100);

        // *******  Setting the postion of the enemy within the view dimensions ********
    int random_number = rand() % 700;
    setPos(random_number,0);

        // *******  Moving the enemies downwards automatically every 50 milli second ********
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);

}
// Function move: move the enemy downwards untill the end of the scene then remove it and delete it
void Enemy:: move()
{

    GameOver* gameover = new GameOver();
    QList<QGraphicsItem*> colliding_items2 = collidingItems();
    for(int i=0;i<colliding_items2.size();i++){
        if(typeid(*(colliding_items2[i])) == typeid(Player)){
            scene()->removeItem(colliding_items2[i]);
            scene()->removeItem(this);
            delete colliding_items2[i];
            delete this;

            gameover->show();


            return;
        }
    }
    setPos(x(),y()+5);
    if(pos().y()+rect().height()<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
