cmake_minimum_required(VERSION 3.29)
project(Estructura_de_datos C)

set(CMAKE_C_STANDARD 11)

add_executable(Estructura_de_datos
        Practica/punteros.c
        Practica/valor_y_referencia.c
        Practica/struct.c
        Practica/struct_y_arreglo.c
        Practica/listas_enlazadas.c
        Tareas/tareaG1.c)
