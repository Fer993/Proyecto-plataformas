#include "MatrizLaberinto.h"

int filas=0, columnas=0;
char cc;

void ExtraerMatriz(char archivo[]){
    filas= getNumFilas(archivo);
    columnas = getNumColumnas(archivo);

    ImprimirMatriz(archivo);
    printf("El numero de filas de esta matriz es de %d \n", filas);
    printf("El numero de columnas de esta matriz es de %d \n" , columnas);
}

void coordenadaSol( char archivo[]){
    int fila = 1;
    int columna = 0;
    FILE* f= OpenFile(archivo);
    for (cc = getc(f); cc != EOF; cc = getc(f)) {
        if (cc != ' ' && cc != '\n') {
            columna++;
        }
        if(cc=='\n'){
            columna=0;
            fila++;
        }
        if(cc== '2'){
            printf("La solucion de este labarinto se encuentra en la fila %d y en el columna %d", fila, columna);
        }
    }

}

int recorrido(char archivo[]){
    int bool=0;
    int contFSol = 0;
    FILE* f= OpenFile(archivo);
    for (cc = getc(f); cc != EOF; cc = getc(f)) {
        if (cc != ' ' && cc != '\n' && cc !='0') {
            if (cc == '1') {
                printf("%d",1);
            }else if(cc=='2'){
                printf("%d", 2);

                bool=1;
            }
        }else if(cc=='\n'){
            contFSol++;
            printf("\n");
        }else if(cc=='0'){
            printf("-");
        }else if(cc==' '){
            printf(" ");
        }
    }
    return bool;
}

