#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <time.h>
#include "baraja.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    void repartirCartas();
    void limpiarTablero();
    Ui::MainWindow *ui;
    baraja *lista1;

private slots:
    void on_pushButton_clicked();
    void on_listBaraja_clicked(QModelIndex index);
    void on_listBaraja_2_clicked(QModelIndex index);
    void on_listBaraja_3_clicked(QModelIndex index);
    void on_listBaraja_4_clicked(QModelIndex index);
    void on_listBaraja_5_clicked(QModelIndex index);

    void on_listWidget_clicked(QModelIndex index);
    void on_listWidget_2_clicked(QModelIndex index);
    void on_listWidget_3_clicked(QModelIndex index);
    void on_listWidget_4_clicked(QModelIndex index);
    void on_listWidget_5_clicked(QModelIndex index);
    void on_listWidget_6_clicked(QModelIndex index);
    void on_listWidget_7_clicked(QModelIndex index);

    void on_actionNuevo_triggered();
    void on_actionSalir_triggered();

    void limitarVentana();
    void hacerMovimientos(baraja *&lista);
    void deseleccionarItems();


    //void cartaClikeada(int lista, nodo *carta);

};

#endif // MAINWINDOW_H
