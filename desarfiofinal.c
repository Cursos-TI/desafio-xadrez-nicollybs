#include <stdio.h>


// Recursivas

// Torre: movimento  para a direita
void movimentoTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    movimentoTorre(casas - 1);
}

// Rainha: movimento  para a esquerda
void movimentoRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    movimentoRainha(casas - 1);
}

// Bispo: recursivo simples
void movimentoBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    movimentoBispoRecursivo(casas - 1);
}

int main() {
    
    // Constantes para movimentos
  
    const int casasTorre = 5;
    const int casasBispo = 3;
    const int casasRainha = 8;
    const int movimentosCavalo = 3;

    // Torre - Recursiva
   
    printf("Movimento da Torre (%d casas para a direita):\n", casasTorre);
    movimentoTorre(casasTorre);
    printf("\n");

    // Bispo - Recursiva
 
    printf("Movimento do Bispo (Recursivo - %d casas na diagonal superior direita):\n", casasBispo);
    movimentoBispoRecursivo(casasBispo);
    printf("\n");


    // Rainha - Recursiva

    printf("Movimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    movimentoRainha(casasRainha);
    printf("\n");

    // Bispo - Loops aninhados (extra)

    printf("Movimento do Bispo (Loops aninhados para simular diagonal):\n");
    for (int linha = 0; linha < casasBispo; linha++) {
        for (int coluna = 0; coluna < casasBispo; coluna++) {
            if (linha == coluna) {
                printf("Cima Direita\n");
                break; // Apenas 1 diagonal por linha
            }
        }
    }
    printf("\n");


    // Cavalo - Loop aninhado com lógica
    
    printf("Movimento do Cavalo (em L - 2 para cima, 1 para a direita):\n");

    int movimentosFeitos = 0;

    for (int i = 0; i < movimentosCavalo; i++) {
        // Simula o movimento em L
        for (int j = 1; j <= 2; j++) {
            if (j == 2) {
                printf("Direita\n");
                break;
            } else {
                printf("Cima\n");
                continue;
            }
        }
        movimentosFeitos++;
    }

    printf("\nTotal de movimentos do Cavalo: %d\n", movimentosFeitos);
    return 0;
}
