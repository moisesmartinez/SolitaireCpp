#include "baraja.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//96970726

baraja::baraja(QWidget *parent) : QListWidget(parent)
{
    primero = 0;
    tipoDeLista = 2;
    paloDeLaLista='*';
    //this->setIconSize(QSize(90,125));
    this->setIconSize(QSize(80,120));
}

void baraja::setTipoDeLista(int numero){
    this->tipoDeLista = numero;
}

void baraja::setPaloDeLaLista(char palo){
    this->paloDeLaLista = palo;
}

nodo_baraja* baraja::recuperar(int pos){

    if(this->tipoDeLista==0){
        if(actual==0){
            actual=primero;
            while(actual->sig!=0)
                actual=actual->sig;
            return actual;
        }
        return actual->ant;
    }

    if(this->tipoDeLista==1){
        return actual;
    }

    if(this->tipoDeLista==2){
        actual = primero;
        int cont=0;
        while(pos!=cont){
            actual = actual->sig;
            cont++;
        }
        return actual;
    }
}

void baraja::pop(){

    if(this->tipoDeLista==0){
        if(actual->ant==primero){
            nodo_baraja *temp=primero;
            primero=primero->sig;
            primero->ant=0;
            delete temp;
            actual=primero;
        }else{
            if(actual->sig==0){
                actual=actual->ant;
                nodo_baraja *temp=actual;
                actual->ant->sig = 0;
                actual=0;
                delete temp;
            }else{
                actual=actual->ant;
                nodo_baraja *temp=actual;
                actual->ant->sig=actual->sig;
                actual->sig->ant = actual->ant;
                actual=actual->sig;
                delete temp;
            }
        }
    }else{
        if(actual==primero){
            cout << "x1" << endl;
            primero=0;
            delete actual;
            actual = primero;
        }else{
            nodo_baraja *temp = actual;
            actual->ant->sig=actual->sig;
            actual=actual->ant;
            actual->cara=true;
            delete temp;
        }
    }
    this->pintarCartas();

}

void baraja::pop(int pos){
    nodo_baraja *cursor = primero;
    int cont=0;
    while(cont!=pos){
        cursor = cursor->sig;
        cont++;
    }
    if(cursor==primero){
        primero=primero->sig;
        if(primero!=0)
            primero->ant=0;
        delete cursor;
    }else{
        if(cursor->sig!=0)
            cursor->sig->ant = cursor->ant;
        cursor->ant->sig = cursor->sig;
        cursor->ant->cara = true;
        delete cursor;

    }

    this->pintarCartas();
}

void baraja::push(int carta, bool cara, char palo){
    nodo_baraja *nuevo;
    nuevo = new nodo_baraja;
    nuevo->carta = carta;
    nuevo->cara = cara;
    nuevo->palo = palo;
    nuevo->sig = nuevo->ant = 0;
    if(this->primero==0){
       primero = nuevo;
    }else{
        actual = primero;
        while(actual->sig!=0)
            actual = actual->sig;

        nuevo->sig = 0;
        nuevo->ant = actual;
        actual->sig=nuevo;
    }
    if(this->tipoDeLista==0)
        actual=nuevo->sig;
    else
        actual=nuevo;

    this->pintarCartas();

}

void baraja::pintarCartas(){
    this->clear();

    if(this->tipoDeLista==0){
        if(actual==0){
            QListWidgetItem *item = new QListWidgetItem(0);
            item->setIcon(QIcon(":/imagenes/blank.png"));
            this->addItem(item);
            actual= primero;
        }else{
            QListWidgetItem *item = new QListWidgetItem(0);
            QString path = QString::number(this->actual->carta);
            path = actual->palo + path;
            item->setIcon(QIcon(":/imagenes/" + path + ".png"));
            this->addItem(item);
            actual = actual->sig;
        }
    }

    if(this->tipoDeLista==1){
        if(primero==0){
            QListWidgetItem *item = new QListWidgetItem(0);
            item->setIcon(QIcon(":/imagenes/blank.png"));
            this->addItem(item);
        }else{
            QListWidgetItem *item = new QListWidgetItem(0);
            QString path = QString::number(this->actual->carta);
            path = actual->palo + path;
            item->setIcon(QIcon(":/imagenes/" + path + ".png"));
            this->addItem(item);

        }
    }

    if(this->tipoDeLista==2){
        actual = primero;
        if(primero==0){
            QListWidgetItem *item= new QListWidgetItem(0);
            item->setIcon(QIcon(":/imagenes/blank.png"));
            this->addItem(item);
        }
        while(actual!=0){
            QPixmap imagen;
            QListWidgetItem *item= new QListWidgetItem(0);
            if(actual->cara){
                QString path = QString::number(this->actual->carta);
                path = actual->palo + path;
                imagen.load(":/imagenes/" + path + ".png");
            }else{
                imagen.load(":/imagenes/reves.png");
            }

            if(actual->sig!=0){
                item->setIcon(imagen.copy(0,0,90,40));
            }else{
                item->setIcon(imagen);
            }

            if(tipoDeLista==2){
                this->addItem(item);
            }else{
                if(actual->sig==0)
                    this->addItem(item);
            }
            actual=actual->sig;
        }
    }
}

void baraja::limpiarBaraja(){
    actual=primero;
    while(primero!=0){
        primero=primero->sig;
        delete actual;
        actual=primero;
    }
    this->clear();
}
