#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>


FILE * OpenFile(char nombre[]){
    FILE* fp;
    fp = fopen(nombre, "r");
    if (fp == NULL) {
        printf("No se pudo abrir el archivo %s", nombre);
    }
}


