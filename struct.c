// Created by jorge casanas on 11/10/24.
#include <stdio.h>
#include <string.h>
// Definimos la estructura
typedef struct {
    char nombre[30];
    char autor[30];
    int publicacion;
    int edicion;
    float precio;
}libro;
/*
int main() {
    // Creamos un objeto de tipo 'libro' que es la estructura que creamos.
    libro primer_libro;

    // Asignamos los valores a las variables del 'struct'.
    strcpy(primer_libro.nombre,"Libro1"); // estamos creando una copia del atributo 'primer_libro.nombre'
    strcpy(primer_libro.autor,"Unknown"); // estamos creando una copia del atributo 'primer_libro.autor'
    primer_libro.publicacion = 1900; // asignamos el valor al atributo 'publicacion'
    primer_libro.edicion = 2; // asignamos el valor al atributo 'edicion'
    primer_libro.precio = 3021.35; // asignamos el valor al atributo 'precio'

    // Mostramos los valores que contienen.
    printf("El nombre del libro es: %s\n",primer_libro.nombre);
    printf("El autor del libro es: %s\n",primer_libro.autor);
    printf("La fecha de publicacion es %d\n",primer_libro.publicacion);
    printf("La edicion es: %d\n",primer_libro.edicion);
    printf("El precio es: $%.2f\n",primer_libro.precio);

    return 0;
}
*/