cmake_minimum_required(VERSION 3.29)
project(Estructura_de_datos C)

set(CMAKE_C_STANDARD 11)

add_executable(Estructura_de_datos
        punteros.c
        valor_y_referencia.c
        struct.c
        struct_y_arreglo.c
        listas_enlazadas.c
        Tareas/tareaG1.c)
