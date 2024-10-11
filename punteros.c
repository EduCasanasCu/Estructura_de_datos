// Created by jorge casanas on 11/10/24.
#include <stdio.h>
int main(void) {
    int edad; // Declaramos una variable entera 'edad'.
    int *direccion_memoria_edad; // Declaramos un puntero 'direccion_memoria_edad'.

    edad = 33; // Asignamos el valor 33 a 'edad'.
    direccion_memoria_edad = &edad; // A 'direccion_memoria_edad' le asignamos la dirección de memoria de 'edad'.

    printf("%d\n",*direccion_memoria_edad); // Imprimimos el valor que contiene la dirección de memoria de la variable 'direccion_memoria_edad'.
    printf("%p\n",direccion_memoria_edad); // Imprimimos la dirección de memoria de la variable 'direccion_memoria_edad'.

    printf("%d\n",edad); // Imprimimos el valor de la variable 'edad'.
    printf("%p\n",&edad); // Imprimimos la dirección de memoria de la variable 'edad'.

    return 0;
}
