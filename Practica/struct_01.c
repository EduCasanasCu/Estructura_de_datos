#include <stdio.h>
#include <string.h>
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
int main() {
    struct atleta atleta1 = {25002341,"casanas",34,1.90};
    struct atleta atleta2 = {35002341,"cuenca",24,1.60};

    // modificar los valores de la estructura
    atleta1.cedula = 12345678;
    strcpy(atleta1.apellido,"Casas");

    // asignar una estructura a otra
    atleta1 = atleta2; // los valores del atleta 2 se asignan a atleta 1.

    // modificamos la variable apellido
    strcpy(atleta2.apellido,"Cascuenca");// estamos creando una nueva copia.


    printf("Los datos del atleta 1 son: \n");
    printf("Cedula: %d\n",atleta1.cedula);
    printf("Apellido: %s\n",atleta1.apellido); // como atleta1=atleta2 es de esperarse que se muestre el "Cascuenca"
                                               // pero no se muestra porque la asignacion de la una estructura a otra
                                               // ocurre antes de que se vuelva a modificar el apellido y esa variable
                                               // que contiene "Cascuenca" esta en una nueva copia de esa variable.
    printf("Edad: %d\n",atleta1.edad);
    printf("Altura: %.2f\n",atleta1.altura);
    return 0;
}

//struct atleta atleta2 = {29002341,"cuenca",24,1.70};

/*
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
int main() {
    struct atleta atleta2 = {20002341,"cuenca",24,1.70};// asignacion de valores

    printf("Los datos del atleta2 son: \n");
    printf("Cedula: %d\n",atleta2.cedula);
    printf("Apellido: %s\n",atleta2.apellido);
    printf("Edad: %d\n",atleta2.edad);
    printf("Altura: %.2f\n",atleta2.altura);
    return 0;
}
*/

/*
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
}atleta1={923004511,"casanas",31,1.59};
int main() {
    printf("Los datos del atleta1 son: \n");
    printf("Cedula: %d\n",atleta1.cedula);
    printf("Apellido: %s\n",atleta1.apellido);
    printf("Edad: %d\n",atleta1.edad);
    printf("Altura: %.2f\n",atleta1.altura);
    return 0;
}
*/