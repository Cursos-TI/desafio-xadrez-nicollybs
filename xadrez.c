#include <stdio.h>

int main() {
    // MOVIMENTOS 
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    
    // Movimento da Torre 

    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    
    // Movimento do Bispo 
    
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    
    // Movimento da Rainha 
    
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);


    // Movimento do Cavalo 
    printf("Movimento do Cavalo (1 movimento em L - 2 cima, 1 direita):\n");
    int movimentoCavalo = 1;

    while (movimentoCavalo > 0) {
        for (int k = 0; k < 2; k++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        movimentoCavalo--;
    }

    int main () 
        int movimentocavalo = 1;

        while(movimentocompleto --)
        { for (int i =0; i < 2; i++) {
            printf ("cima\n");

            printf ("Direita\n");

        }


    return 0;
}
