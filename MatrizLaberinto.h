#include "LecturaArchivo.h"

struct MatrizLab{
    int cont_caract , cont_xfilas, cont_salt;
    char character;
};

struct MatrizLab matriz;

int getTotalCaracteres(char nombre[]){
    FILE* f= OpenFile(nombre);
    for (matriz.character = getc(f); matriz.character != EOF; matriz.character = getc(f)) {
        if (matriz.character != ' ') {
            if (matriz.character != '\n') {
                matriz.cont_caract = matriz.cont_caract + 1;
            }
        }
    }
    return  matriz.cont_caract;
}

int getNumFilas(char nombre[]){
    FILE* f= OpenFile(nombre);
    matriz.cont_salt = 1;
    for (matriz.character = getc(f); matriz.character != EOF; matriz.character = getc(f)) {
        if (matriz.character != ' ') {
            if (matriz.character == '\n') {
                matriz.cont_salt=matriz.cont_salt+1;
            }
        }
    }
    return  matriz.cont_salt;

}
int getNumColumnas(char nombre[]){
    matriz.cont_xfilas= getTotalCaracteres(nombre)/ matriz.cont_salt;
    return matriz.cont_xfilas;
}

void ImprimirMatriz(char nombre[]){
    FILE* f= OpenFile(nombre);
    for (matriz.character = getc(f); matriz.character != EOF; matriz.character = getc(f)) {
        if(matriz.character=='\n'){
            printf("\n");
        }else if(matriz.character=='0'){
            printf("0");
        }else if(matriz.character==' '){
            printf(" ");
        }else if(matriz.character=='1'){
            printf("1");
        }else if(matriz.character=='2'){
            printf("2");
        }
    }
    printf("\n");
}
