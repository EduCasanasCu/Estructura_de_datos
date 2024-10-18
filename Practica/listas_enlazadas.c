// Created by jorge casanas on 13/10/24.
#include <stdio.h>
#include <stdlib.h>
// Nodo = dato a almacenar + puntero.

// Definimos el tipo de dato que queremos almacenar en el nodo.
typedef struct {
    int nro;
}Item;

// Definimos el nodo.
typedef struct Elemento {
    Item dato;
    struct Elemento *siguiente;
}Nodo;

// Crear lista vacia
Nodo *crearLista() {
    Nodo *cabeza = NULL;
    return cabeza;
}

// Crear un nodo
Nodo *crearNodo(Item x) {
    Nodo *a;
    a = malloc(sizeof(Nodo));
    a -> dato = x;
    a -> siguiente = NULL;
    return a;
}

// Insertar un nuevo elemento al inicio de la lista.
void inserInicio(Nodo **cabeza, Item entrada) {
    Nodo *nuevo;
    nuevo = crearNodo(entrada);
    nuevo -> siguiente = *cabeza;
    *cabeza = nuevo;
}
/*
int main() {
    Nodo *cab = crearLista();
    int i;
    Item x;
    for (i = 0; i < 10; i++) {
        x.nro = i;
        inserInicio(&cab,x);
    }
    return 0;
}
*/