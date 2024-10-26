# ESTRUCTURA DE DATOS EN C.
## 1) STRUCT.
### Forma de una estructura.
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
```
### Declarar variables de tipo estructura.
#### Forma 1
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
}atleta1,atleta2,atleta3; // variables declaradas.
```
#### Forma 2
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
int main() {
    struct atleta atleta1,atleta2,atleta3; // variables declaradas.
    return 0;
}
```
### Asignación de valores a la estructura y mostrar por pantalla. 
#### Forma 1.
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
}atleta1={923004511,"casanas",31,1.59};// asignacion de valores

int main() {
    printf("Los datos del atleta1 son: \n");
    printf("Cedula: %d\n",atleta1.cedula);
    printf("Apellido: %s\n",atleta1.apellido);
    printf("Edad: %d\n",atleta1.edad);
    printf("Altura: %.2f\n",atleta1.altura);
    return 0;
}
```
#### Forma 2.
```c
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
```
>Esto no se puede hacer al momento de asignar valores:
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
int main() {
    struct atleta atleta2;
        atleta2 = {20002341,"cuenca",24,1.70};// asignacion de valores incorrecta
    return 0;
}
```
### Tamaño en bytes de la estructura=> **sizeof()**.
```c
struct atleta {
    int cedula;
    char apellido[50];
    int edad;
    float altura;
};
int main() {
    struct atleta atleta1 = {25002341,"casanas",34,1.90};
    printf("El tamaño de la estructura es: %d", sizeof(atleta1));
    return 0;
}
```
### Modificar valores de la estructura.
```c
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

    // modificar los valores de la estructura
    atleta1.cedula = 12345678;
    strcpy(atleta1.apellido,"Casas");

    printf("Los datos del atleta 1 son: \n");
    printf("Cedula: %d\n",atleta1.cedula);
    printf("Apellido: %s\n",atleta1.apellido);
    printf("Edad: %d\n",atleta1.edad);
    printf("Altura: %.2f\n",atleta1.altura);
    return 0;
}
```
### Asignar una estructura a otra.
```c
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

    printf("Los datos del atleta 1 son: \n");
    printf("Cedula: %d\n",atleta1.cedula);
    printf("Apellido: %s\n",atleta1.apellido);
    printf("Edad: %d\n",atleta1.edad);
    printf("Altura: %.2f\n",atleta1.altura);
    return 0;
}
```
> **Algo interesante..** es que despues de la asignacion de una estructura a otra (atleta1=atleta2), si se modifica la estructura 'atleta2.apellido' esta no se mostrara al momento de imprimir los datos del 'atleta1' pese a ser iguales a 'atleta2', y es porque luego de la asignacion de la una estructura a la otra estamos creando una nueva copia de esta modificacion, por lo tanto al imprimir 'atleta1' se muestra los valores del 'atleta2' que tenia hasta el momento de la asignacion de estructuras.
```c
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
```


```c

```


```c

```


```c

```






```c
#include <stdio.h>
#include <string.h>
// Definimos la estructura
typedef struct {
    char nombre[30];
    char autor[30];
    int publicacion;
    int edicion;
    float precio;
}Libro;

int main() {
    // Creamos un objeto de tipo 'libro' que es la estructura que creamos.
    Libro primer_libro;

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
```
## 2) STRUCT Y ARRAY.
```c
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

```
## 3) PUNTEROS.
```c
// Created by jorge casanas on 11/10/24.
#include <stdio.h>

int main(void) {
    int edad, numero; // Declaramos una variable entera 'edad'.
    int *direccion_memoria_edad, *puntero_numero; // Declaramos un puntero 'direccion_memoria_edad'.

    edad = 33; // Asignamos el valor 33 a 'edad'.
    direccion_memoria_edad = &edad; // A 'direccion_memoria_edad' le asignamos la dirección de memoria de 'edad'.

    printf("%d\n",*direccion_memoria_edad); // Imprimimos el valor que contiene la dirección de memoria de la variable 'direccion_memoria_edad'.
    printf("%p\n",direccion_memoria_edad); // Imprimimos la dirección de memoria de la variable 'direccion_memoria_edad'.

    printf("%d\n",edad); // Imprimimos el valor de la variable 'edad'.
    printf("%p\n",&edad); // Imprimimos la dirección de memoria de la variable 'edad'.

    printf("##################\n");

    puntero_numero = &numero; // A 'puntero_numero' le asignamos la dirección de memoria de 'numero'.
    *puntero_numero = 45; // A la dirección de memoria de 'puntero_numero' le asignamos el valor 45.

    printf("%d\n",numero); // Imprimimos el valor de la variable 'numero'.

    return 0;
}
```
## 4) PASO DE PARAMETROS POR VALOR Y REFERENCIA.
```c
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
```
