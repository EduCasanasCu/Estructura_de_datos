// Created by jorge casanas on 11/10/24.
#include <stdio.h>
// Declaracion de la funcion division.
void division(int dividendo, int divisor, int *cociente, int *residuo);

// Funcion principal del programa.
int main(void) {
    int numero1, numero2, cocien, resi;
    numero1 = 20;
    numero2 = 5;
    // Llamamos a la funcion creada 'division'.
    division(numero1,numero2,&cocien, &resi);

    printf("%d / %d = %d y el residuo es %d",numero1,numero2,cocien,resi);

    return 0;
}

// Definicion de la funcion division.
void division(int dividendo, int divisor, int *cociente, int *residuo) {
    *cociente = dividendo / divisor;
    *residuo = dividendo % divisor;
}