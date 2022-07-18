#include "juego.h"

int main(){
    char archivo[]="laberinto.txt";
    ExtraerMatriz(archivo);
    if(recorrido(archivo)==1){
        printf("\n");
        printf("Se encontro una solucion del laberinto \n");
        coordenadaSol(archivo);
    }else{
        printf("\n");
        printf("No se encontro la solucionpara este laberinto");
    }
    return 0;
}
