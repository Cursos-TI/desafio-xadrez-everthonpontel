#include <stdio.h>
 
int main() {
    //variaveis de todas as peças - rainha
    int torre = 1;
    int bispo = 1;
    int cavalo = 1;
   
    //peça torre utilizando o WHILE
    printf("TORRE\n");
    while (torre <= 5) {
        printf("DIREITA\n", torre);
        torre++;
    }
   
    //peça bispo utilizando o DO-WHILE
   printf("\nBISPO\n");
   do {
        printf("CIMA,DIREITA\n", bispo);
        bispo++;
    } while (bispo <= 5);

    //peça rainha utilizando o FOR
   printf("\nRAINHA\n");
   for ( int rainha = 1; rainha <= 8; rainha++)
{
    printf("ESQUERDA\n", rainha);
}   
   
    //paça cavalo utilizando loop aninhada
   
   printf("\nCAVALO\n");
    while (cavalo--)
    {
        for(int c = 0; c < 2; c++) {
           printf("DIREITA\n");
        }
    printf("CIMA\n");
    
    }


     return 0;
}
   



