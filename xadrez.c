#include <stdio.h>

// ================== TORRE ==================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ================== BISPO ==================
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(vertical - 1, horizontal - 1); // chamada recursiva para diminuir a diagonal
}

// ================== RAINHA ==================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ================== CAVALO ==================
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
}

// ================== MAIN ==================
int main() {
    // Movimento da TORRE (5 casas à direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do BISPO (5 casas na diagonal: cima e direita)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);  // 5 passos, 1 coluna horizontal por vez

    // Movimento da RAINHA (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do CAVALO (2 cima + 1 direita)
    printf("\n");
    moverCavalo();

    return 0;
}
