/*
Desarrollar un programa que permita, a través de opciones de menú, realizar lo siguiente:

Ingresar una frase
Contar cuantas palabras tiene la frase
Reemplazar un caracter por otro. Ambos caracteres son ingresados por teclado
Mostrar en pantalla la frase invertida
Ejemplo:
Frase: Dios Patria y libertad
Cantidad de palabras: 4
Caracter 1: a, caracter 2: * Resultado: Dios P*tri* y libert*d
Frase invertida: datrebil y airtaP soiD

Tarea en grupo: Grupos Autónomos 1er Parcial
*/
#include <stdio.h>
#include <string.h>
void MostrarMenu();
int ValidarOpcion(int opcion);
int ContadorPalabras(char frase[100]);
void ReemplazarCaracter(char a, char b, char frase[100]);
void InvertirFrase(char frase[100]);
/*
int main(){
    int opcion;

    MostrarMenu();
    printf("Ingrese la acción que desea realizar: ");
    scanf("%d", &opcion);
    fflush(stdin); // limpia el buffer del salto de línea que dejó el 'scanf'.

    opcion = ValidarOpcion(opcion);
    while (opcion!=4) {
        char frase[100];
        printf("Ingrese una frase: ");
        fgets(frase,100,stdin);
        frase[strcspn(frase, "\n")] = '\0'; // elimina el salto de linea que captura 'fgets'.
        if(opcion == 1) {
            int cantidadPalabras = ContadorPalabras(frase);
            printf("La cantidad de palabras es: %d\n", cantidadPalabras);
        }
        if(opcion == 2) {
            char caracter1, caracter2;
            printf("Ingrese el caracter de la frase que desea reemplazar:");
            scanf("%c", &caracter1);
            getchar(); // volvemos a limpiar el buffer despues de la función fgets().
            printf("Ingrese el nuevo caracter a: ");
            scanf("%c", &caracter2);
            ReemplazarCaracter(caracter1,caracter2,frase);
        }
        if(opcion == 3){
            InvertirFrase(frase);
        }
        MostrarMenu();
        printf("Ingrese la acción que desea realizar: ");
        scanf("%d", &opcion);
        fflush(stdin);  // Limpiar el buffer nuevamente antes del siguiente ciclo.
        opcion = ValidarOpcion(opcion);
    }

    return 0;
}
*/
void MostrarMenu() {
    printf("*****************************************\n");
    printf("1)Contar las palabras que tiene la frase.\n"
           "2)Reemplazar un caracter por otro.\n"
           "3)Mostrar frase invertida.\n"
           "4)Salir\n");
    printf("*****************************************\n");
}
int ValidarOpcion(int opcion) {
    while(opcion<1 || opcion>=4) {
        if (opcion ==4) {
            printf("Has seleccionado salir del programa!");
            break;
        }
        printf("El número ingresado no es válido! Ingresa un número del 1 al 3: ");
        scanf("%d",&opcion);
    }
    return opcion;
}
int ContadorPalabras(char frase[100]){
    int cantidadLetrasFrase = strlen(frase);
    int contador = 0;
    for(int i=0; i<cantidadLetrasFrase;i++){
        if(frase[i]==' '){
            contador++;
        }
    }
    return contador+1;
}
void ReemplazarCaracter(char a, char b, char frase[100]) {
    int longitudFrase= strlen(frase);
    for(int i=0;i<longitudFrase;i++){
        if(frase[i]==a){
            frase[i]=b;
        }
        printf("%c",frase[i]);
    }
    printf("\n");
}
void InvertirFrase(char frase[100]){
    int longitudFrase =strlen(frase);
    for(int i=longitudFrase-1;i>=0;i--){
        printf("%c", frase[i]);
    }
    printf("\n");
}