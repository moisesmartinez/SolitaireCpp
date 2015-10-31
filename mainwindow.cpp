#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <cstdlib>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lista1 = 0;
    this->setWindowTitle(tr("[Solitario hecho en Linux ^_^]"));
    limitarVentana();
    this->ui->listBaraja->setTipoDeLista(0);
    this->ui->listBaraja_2->setTipoDeLista(1);
    this->ui->listBaraja_3->setTipoDeLista(1);
    this->ui->listBaraja_4->setTipoDeLista(1);
    this->ui->listBaraja_5->setTipoDeLista(1);
    this->repartirCartas();

}

MainWindow::~MainWindow()
{
    limpiarTablero();
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionSalir_triggered()
{
    this->close();
}

void MainWindow::limitarVentana()
{
    this->setMaximumWidth(950);
    this->setMinimumWidth(950);
    this->setMaximumHeight(700);
    this->setMinimumHeight(700);
}

void MainWindow::repartirCartas(){

    srand(time(0));
    this->limpiarTablero();
    int cont1, cont2, cont3, cont4, cont5, cont6, cont7, _C;
    cont1 = cont2 = cont3 = cont4 = cont5 = cont6 = cont7 = _C = 0;

    this->ui->listBaraja_2->pintarCartas();
    this->ui->listBaraja_3->pintarCartas();
    this->ui->listBaraja_4->pintarCartas();
    this->ui->listBaraja_5->pintarCartas();

    bool *cards = new bool[52];    
    for(int i=0; i<52; i++)
        cards[i]=false;

    int carta, lista, pal;
    bool cara;
    char palo;
    bool cartaFueRepartida=false;

    //REPARTIR LAS CARTAS A LA BARAJA PRINCIPAL
    while(_C<24){
        pal=rand()%5;
        while(pal==0)
            pal=rand()%5;
        carta = rand()%14;
        while(carta==0)
            carta=rand()%14;
        if(cards[(pal-1)*13+carta-1]==false){
            switch(pal){
            case 1:
                palo='C';
                break;
            case 2:
                palo='D';
                break;
            case 3:
                palo='E';
                break;
            case 4:
                palo='T';
                break;
            }
            this->ui->listBaraja->push(carta,true,palo);
            _C++;
            cards[(pal-1)*13+carta-1]=true;
        }
    }

    //REPARTIR CARTAS A LAS BARAJAS DE ABAJO
    while(_C<52){
        cartaFueRepartida=false;
        pal=rand()%5;
        while(pal==0)
            pal=rand()%5;
        carta = rand()%14;
        while(carta==0)
            carta=rand()%14;
        if(cards[(pal-1)*13+carta-1]==false){
            while(cartaFueRepartida==false){
                switch(pal){
                case 1:
                    palo='C';
                    break;
                case 2:
                    palo='D';
                    break;
                case 3:
                    palo='E';
                    break;
                case 4:
                    palo='T';
                    break;
                }
                lista = rand()%8;
                while(lista==0){
                    lista = rand()%8;
                }
                switch(lista){
                case 1:
                    if(cont1==0){
                        this->ui->listWidget->push(carta, true, palo);
                        cont1++;
                        cartaFueRepartida=true;
                    }
                    break;
                case 2:
                    if(cont2==0){
                        cara = false;
                    }else{
                        if(cont2==1)
                            cara = true;
                    }
                    if(cont2<2){
                        this->ui->listWidget_2->push(carta,cara,palo);
                        cont2++;
                        cartaFueRepartida=true;
                    }
                    break;
                case 3:
                    if(cont3<2)
                        cara=false;
                    else{
                        if(cont3==2)
                            cara=true;
                    }
                    if(cont3<3){
                        this->ui->listWidget_3->push(carta,cara,palo);
                        cont3++;
                        cartaFueRepartida=true;
                    }
                    break;
                case 4:
                    if(cont4<3)
                        cara=false;
                    else{
                        if(cont4==3)
                            cara=true;
                    }
                    if(cont4<4){
                        this->ui->listWidget_4->push(carta,cara,palo);
                        cont4++;
                        cartaFueRepartida=true;
                    }
                    break;
                case 5:
                    if(cont5<4)
                         cara=false;
                    else{
                         if(cont5==4)
                             cara=true;
                    }
                    if(cont5<5){
                         this->ui->listWidget_5->push(carta,cara,palo);
                         cont5++;
                         cartaFueRepartida=true;
                    }
                    break;
                case 6:
                    if(cont6<5)
                         cara=false;
                    else{
                        if(cont6==5)
                            cara=true;
                    }
                    if(cont6<6){
                        this->ui->listWidget_6->push(carta,cara,palo);
                        cont6++;
                        cartaFueRepartida=true;
                    }
                    break;
                case 7:
                    if(cont7<6)
                        cara=false;
                    else{
                        if(cont7==6)
                            cara=true;
                    }
                    if(cont7<7){
                        this->ui->listWidget_7->push(carta,cara,palo);
                        cont7++;
                        cartaFueRepartida=true;
                    }
                    break;
                }
            }
            cards[(pal-1)*13+carta-1]=true;
            _C++;
        }
    }
}

void MainWindow::hacerMovimientos(baraja *&lista){
    if(lista1==0)
        lista1=lista;
    else{
        baraja *lista2=lista;

        if(lista2->tipoDeLista!=0){
            nodo_baraja *n1 = lista1->recuperar(lista1->currentRow());
            if(n1!=0 && lista2->currentRow()==lista2->count()-1){
                if(n1->cara!=false){
                    //SI ENTRO HASTA AQUI, VA A COMENZAR A HACER LAS JUGADAS
                    //AHORA HAY QUE VER SI SOLO SE VA A MOVER ES UNA SOLA CARTA O UN CONJUNTO
                    nodo_baraja *n2 = lista2->recuperar(lista2->currentRow());
                    if(lista1->currentRow()==lista1->count()-1){      //  <--- SI ES UNA CARTA
                        if(lista2->tipoDeLista==1){
                            if(n2==0){
                                if(n1->carta==1){
                                    lista2->push(n1->carta, true, n1->palo);
                                    lista1->pop();
                                    lista2->setPaloDeLaLista(n1->palo);
                                }
                            }else{
                                if(n1->palo==n2->palo && (n1->carta-n2->carta)==1){
                                    lista2->push(n1->carta, true, n1->palo);
                                    lista1->pop();
                                    lista2->setPaloDeLaLista(n1->palo);
                                }
                            }
                        }
                        if(lista2->tipoDeLista==2){
                            if(n2!=0){
                                char color1, color2;
                                if(n1->palo=='T' || n1->palo=='E')
                                    color1='N';
                                else
                                    color1='R';

                                if(n2->palo=='T' || n2->palo=='E')
                                    color2='N';
                                else
                                    color2='R';

                                if(color1!=color2 && (n2->carta-n1->carta)==1){
                                    lista2->push(n1->carta, true, n1->palo);
                                    lista1->pop();
                                    //lista2->setPaloDeLaLista(n1->palo);
                                }
                            }else{
                                if(lista1->tipoDeLista==0){
                                    lista2->push(n1->carta, true, n1->palo);
                                    lista1->pop();
                                }else{
                                    if(n1->carta == 13){
                                        int pos = lista1->currentRow();
                                        nodo_baraja *temp = lista1->recuperar(pos);
                                        while(temp!=0){
                                            lista2->push(temp->carta,true,temp->palo);
                                            lista1->pop(pos);
                                            temp=lista1->recuperar(pos);
                                        }
                                    }
                                }
                            }
                        }
                    //HASTA AQUI ES EL CODIGO PARA EL MOVIMIENTO DE UNA CARTA
                    //AHORA VA EL CODIGO DEL MOVIMIENTO DE UN CONJUNTO DE CARTAS

                    }else{
                        if(lista2->tipoDeLista==2){
                            if(n2==0){
                                if(n1->carta==13){
                                    int pos = lista1->currentRow();
                                    nodo_baraja *temp = lista1->recuperar(pos);
                                    while(temp!=0){
                                        lista2->push(temp->carta,true,temp->palo);
                                        lista1->pop(pos);
                                        temp=lista1->recuperar(pos);
                                    }
                                }
                            }else{
 /*INICIO*/                     char color1, color2;
                                if(n1->palo=='T' || n1->palo=='E')
                                    color1='N';
                                else
                                    color1='R';

                                if(n2->palo=='T' || n2->palo=='E')
                                    color2='N';
                                else
                                    color2='R';

                                if(color1!=color2 && (n2->carta-n1->carta)==1){
                                    int pos = lista1->currentRow();
                                    nodo_baraja *temp = lista1->recuperar(pos);
                                    while(temp!=0){
                                        lista2->push(temp->carta,true,temp->palo);
                                        lista1->pop(pos);
                                        temp=lista1->recuperar(pos);
                                   }
                                }
/*FIN*/                     }
                        }
                    }
                }
            }
        }
        this->deseleccionarItems();
        this->lista1=0;
    }
}


void MainWindow::on_actionNuevo_triggered()
{
    int resp = QMessageBox::warning(this, tr("Solitario"),
                                    tr("Esta seguro de querer empezar un juego nuevo?"),
                                    QMessageBox::Yes| QMessageBox::Cancel);
    if(resp==QMessageBox::Yes){
        this->repartirCartas();
    }
}

void MainWindow::limpiarTablero(){
    ui->listBaraja->limpiarBaraja();
    ui->listBaraja_2->limpiarBaraja();
    ui->listBaraja_3->limpiarBaraja();
    ui->listBaraja_4->limpiarBaraja();
    ui->listBaraja_5->limpiarBaraja();

    ui->listWidget->limpiarBaraja();
    ui->listWidget_2->limpiarBaraja();
    ui->listWidget_3->limpiarBaraja();
    ui->listWidget_4->limpiarBaraja();
    ui->listWidget_5->limpiarBaraja();
    ui->listWidget_6->limpiarBaraja();
    ui->listWidget_7->limpiarBaraja();
}


void MainWindow::on_listBaraja_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listBaraja);
}

void MainWindow::on_listBaraja_2_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listBaraja_2);
}

void MainWindow::on_listBaraja_3_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listBaraja_3);
}

void MainWindow::on_listBaraja_4_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listBaraja_4);
}

void MainWindow::on_listBaraja_5_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listBaraja_5);
}

void MainWindow::on_listWidget_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget);
}

void MainWindow::on_listWidget_2_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_2);
}

void MainWindow::on_listWidget_3_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_3);
}

void MainWindow::on_listWidget_4_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_4);
}

void MainWindow::on_listWidget_5_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_5);
}

void MainWindow::on_listWidget_6_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_6);
}

void MainWindow::on_listWidget_7_clicked(QModelIndex index)
{
    this->hacerMovimientos(ui->listWidget_7);
}

void MainWindow::deseleccionarItems(){
    ui->listBaraja->clearSelection();
    ui->listBaraja_2->clearSelection();
    ui->listBaraja_3->clearSelection();
    ui->listBaraja_4->clearSelection();
    ui->listBaraja_5->clearSelection();

    ui->listWidget->clearSelection();
    ui->listWidget_2->clearSelection();
    ui->listWidget_3->clearSelection();
    ui->listWidget_4->clearSelection();
    ui->listWidget_5->clearSelection();
    ui->listWidget_6->clearSelection();
    ui->listWidget_7->clearSelection();
}

void MainWindow::on_pushButton_clicked()
{
    this->ui->listBaraja->pintarCartas();
}
