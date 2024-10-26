#include <stdio.h>
void EliminarSaltoLinea(char frase[]);
/*
int main() {
    char frase1[40], frase2[40];
    int i, j, encontrado;

    printf("Ingrese la primera frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    EliminarSaltoLinea(frase1);  // Eliminar salto de línea

    printf("Ingrese la segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    EliminarSaltoLinea(frase2);  // Eliminar salto de línea

    // Buscar si frase2 está contenida en frase1
    for (i = 0; frase1[i] != '\0'; i++) {
        if (frase1[i] == frase2[0]) {  // Comparar el primer carácter de frase2 con frase1
            encontrado = 1;
            for (j = 0; frase2[j] != '\0'; j++) {
                if (frase1[i + j] != frase2[j]) {  // Si no coincide algún carácter, romper ciclo
                    encontrado = 0;
                    break;
                }
            }
            // Si se encontró una coincidencia, salir del ciclo
            if (encontrado) {
                printf("La segunda frase se encuentra en la primera.\n");
                return 0;
            }
        }
    }

    // Si no se encontró la frase
    printf("La segunda frase no se encuentra en la primera.\n");
    return 0;
}
*/
void EliminarSaltoLinea(char frase[]) {
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';  // Reemplaza el salto de línea con el carácter nulo
        }
    }
}