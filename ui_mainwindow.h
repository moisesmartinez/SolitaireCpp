/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 12 16:38:46 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <baraja.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo;
    QAction *actionABOUT;
    QAction *actionSalir;
    QWidget *centralWidget;
    baraja *listWidget;
    baraja *listWidget_2;
    baraja *listWidget_3;
    baraja *listWidget_4;
    baraja *listWidget_6;
    baraja *listWidget_7;
    baraja *listBaraja;
    baraja *listBaraja_2;
    baraja *listBaraja_3;
    baraja *listBaraja_4;
    baraja *listWidget_5;
    baraja *listBaraja_5;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuJuego;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 613);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	/*background-color: rgb(0, 170, 0);*/\n"
"	background-image: url(:/imagenes/fondo.png);\n"
"}\n"
"\n"
"QListWidget{\n"
"	background-image: url(:/imagenes/fondo.png);\n"
"	/*background-color: rgb(0, 170, 0);*/\n"
"}"));
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionABOUT = new QAction(MainWindow);
        actionABOUT->setObjectName(QString::fromUtf8("actionABOUT"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listWidget = new baraja(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 270, 100, 360));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	\n"
"	transparency=0;\n"
"	\n"
"}"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2 = new baraja(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(170, 270, 100, 360));
        listWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3 = new baraja(centralWidget);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));
        listWidget_3->setGeometry(QRect(300, 270, 100, 360));
        listWidget_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_4 = new baraja(centralWidget);
        listWidget_4->setObjectName(QString::fromUtf8("listWidget_4"));
        listWidget_4->setGeometry(QRect(430, 270, 100, 360));
        listWidget_4->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	\n"
"	transparency=0;\n"
"	\n"
"}"));
        listWidget_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_6 = new baraja(centralWidget);
        listWidget_6->setObjectName(QString::fromUtf8("listWidget_6"));
        listWidget_6->setGeometry(QRect(690, 270, 100, 360));
        listWidget_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_7 = new baraja(centralWidget);
        listWidget_7->setObjectName(QString::fromUtf8("listWidget_7"));
        listWidget_7->setGeometry(QRect(820, 270, 100, 360));
        listWidget_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja = new baraja(centralWidget);
        listBaraja->setObjectName(QString::fromUtf8("listBaraja"));
        listBaraja->setGeometry(QRect(170, 40, 100, 130));
        listBaraja->setStyleSheet(QString::fromUtf8(""));
        listBaraja->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_2 = new baraja(centralWidget);
        listBaraja_2->setObjectName(QString::fromUtf8("listBaraja_2"));
        listBaraja_2->setGeometry(QRect(430, 40, 100, 130));
        listBaraja_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_3 = new baraja(centralWidget);
        listBaraja_3->setObjectName(QString::fromUtf8("listBaraja_3"));
        listBaraja_3->setGeometry(QRect(560, 40, 100, 130));
        listBaraja_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_4 = new baraja(centralWidget);
        listBaraja_4->setObjectName(QString::fromUtf8("listBaraja_4"));
        listBaraja_4->setGeometry(QRect(690, 40, 100, 130));
        listBaraja_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_5 = new baraja(centralWidget);
        listWidget_5->setObjectName(QString::fromUtf8("listWidget_5"));
        listWidget_5->setGeometry(QRect(560, 270, 100, 360));
        listWidget_5->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	\n"
"	transparency=0;\n"
"	\n"
"}"));
        listWidget_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_5 = new baraja(centralWidget);
        listBaraja_5->setObjectName(QString::fromUtf8("listBaraja_5"));
        listBaraja_5->setGeometry(QRect(820, 40, 100, 130));
        listBaraja_5->setStyleSheet(QString::fromUtf8(""));
        listBaraja_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listBaraja_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 40, 100, 130));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/reves.png);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1002, 24));
        menuJuego = new QMenu(menuBar);
        menuJuego->setObjectName(QString::fromUtf8("menuJuego"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuJuego->menuAction());
        menuJuego->addAction(actionNuevo);
        menuJuego->addAction(actionABOUT);
        menuJuego->addAction(actionSalir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("MainWindow", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionNuevo->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionABOUT->setText(QApplication::translate("MainWindow", "ABOUT...", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        menuJuego->setTitle(QApplication::translate("MainWindow", "Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
