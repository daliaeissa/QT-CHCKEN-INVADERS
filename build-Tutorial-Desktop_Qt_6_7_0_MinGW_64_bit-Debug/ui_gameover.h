/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QPushButton *pushButton;
    QLabel *label_gameover;

    void setupUi(QDialog *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName("GameOver");
        GameOver->resize(934, 546);
        pushButton = new QPushButton(GameOver);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 440, 93, 41));
        label_gameover = new QLabel(GameOver);
        label_gameover->setObjectName("label_gameover");
        label_gameover->setGeometry(QRect(122, 220, 681, 111));

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QDialog *GameOver)
    {
        GameOver->setWindowTitle(QCoreApplication::translate("GameOver", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("GameOver", "Replay", nullptr));
        label_gameover->setText(QCoreApplication::translate("GameOver", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; color:#ff0000;\">GAME OVER!!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
