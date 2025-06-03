#include <stdio.h>
 //recursividade do BISPO,TORRE,RAINHA e CAVALO
void moverbispo(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("DIREITA\n");
        if (i < passos - 1) {
            printf("CIMA\n");
        }
    }
}
void movertorre(int passos) {
    if (passos > 0) {
        printf("DIREITA\n");
        movertorre(passos - 1);
    }
}
void moverrainha(int passos) {
    if (passos > 0) {
        printf("ESQUERDA\n");
        moverrainha(passos - 1);
    }
}
void movercavalo(int passos) {
    for (int i = 0; i < passos; i++) {
        printf("cima\n");
    }
    printf("direita\n");
}



int main() {
    //variaveis das peças: BISPO,TORRE,RAINHA e CAVALO
    printf("BISPO\n");
    moverbispo(3);
    printf("===========\n");
    
    printf("\nTORRE\n");
    movertorre(5);
    printf("===========\n");
    
    printf("\nRAINHA\n");
    moverrainha(8);
    printf("===========\n");
    
    printf("\nCAVALO\n");
    movercavalo(2);
    printf("===========\n");
    
   

     return 0;
}