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

    return 0;
}
