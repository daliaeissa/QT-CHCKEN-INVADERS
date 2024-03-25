
#include <QApplication>
#include<QLabel>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsPixmapItem>
#include<QPixmap>
#include "player.h"
#include <QTimer>
#include <QDebug>
#include <QBrush>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // *******  Create the View ********
    QGraphicsView view;
    view.setFixedSize(800, 600);

    // *******  Create the Player ********
    Player* player = new Player();
    QPixmap spaceship("C:/Users/dalia/Desktop/Spring 2024 semester/CS2 lab/Assignments/Assignment 2 QT CHICKEN INVADERS/Session 05 Game Template (2)/Session 05 Game Template/spaceship2.png");
    player->setPixmap(spaceship.scaled(100,100));

    // ******* Create the Scene ********
    QGraphicsScene scene;
    scene.setSceneRect(0, 0, 800, 600);
    scene.addItem(player);
    // *******  Setting the foucs to the Player ********
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // *******  Adjust the location of the Player (middle of the screen) ********
    player->setPos(view.width()/2-100, view.height()-100);

   // *******   Assign scene to the view   ***************
    view.setScene(&scene);



    // *******  Create the Enemies automatically ********
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),player,SLOT(createEnemy()));
    time->start(2000);
    view.show();

    return a.exec();
}
