#ifndef BARAJA_H
#define BARAJA_H
#include <QListWidget>
#include <QListWidgetItem>
#include <QPixmap>

struct nodo_baraja{
    nodo_baraja *sig, *ant;
    int carta;
    char palo;
    bool cara;
};

class baraja : public QListWidget
{
public:
    baraja(QWidget *parent = 0);
    void push(int carta,bool cara,char palo);
    nodo_baraja* recuperar(int pos);
    void pop();
    void pop(int pos);
    void pintarCartas();
    void limpiarBaraja();
    void setTipoDeLista(int numero);
    int tipoDeLista;
    void setPaloDeLaLista(char palo);
    char paloDeLaLista;

private:
    nodo_baraja *primero;
    nodo_baraja *actual;
};

#endif // BARAJA_H
