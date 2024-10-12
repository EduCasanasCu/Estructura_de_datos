// Created by jorge casanas on 12/10/24.
#include <stdio.h>
#include <stdlib.h>
// Definimos la estructura
typedef struct {
    char nombre[30];
    char autor[30];
    int publicacion;
    int edicion;
    float precio;
}Libro;

int main() {
    // creamos un arreglo de tipo 'Libro' que es la estructura.
    Libro array_libros[3];

    // con un bucle llenamos el arreglo para cada libro.
    for(int i=0;i<3;i++) {
        printf("Cual es el nombre del %d libro: ",i+1);
        fgets(array_libros[i].nombre,30,stdin);

        printf("Cual es el autor: ");
        fgets(array_libros[i].autor,30,stdin);

        printf("Ingrese el año de publicacion: ");
        scanf("%d",&array_libros[i].publicacion);

        printf("Ingrese la edicion del libro: ");
        scanf("%d",&array_libros[i].edicion);

        printf("Ingrese el precio del libro: ");
        scanf("%f",&array_libros[i].precio);

        fflush(stdin); // sirve para vaciar los valores que guarda el 'fgets'despues de ser usados.
        
        printf("----------------------------------\n");
    }
    printf("La lista de libros almacenados en el vector es: ");

    for(int i=0;i<3;i++) {
        printf("El nombre del libro es: %s",array_libros[i].nombre);
        printf("El autor del libro es: %s",array_libros[i].autor);
        printf("La fecha de publicacion es %d\n",array_libros[i].publicacion);
        printf("La edicion es: %d\n",array_libros[i].edicion);
        printf("El precio es: $%.2f\n",array_libros[i].precio);
        printf("----------------------------------\n");
    }
    return 0;
}
