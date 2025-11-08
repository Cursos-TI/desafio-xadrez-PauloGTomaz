#include <stdio.h>


void moverTorre(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; // Caso base
    printf("Direita\n");
    moverTorre(passoAtual + 1, totalPassos); // Chamada recursiva
}


void moverBispo(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; // Caso base

    // Loop externo: movimento vertical
    for (int i = 1; i <= 1; i++) {
        // Loop interno: movimento horizontal
        for (int j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(passoAtual + 1, totalPassos); 
}


void moverRainha(int passoAtual, int totalPassos) {
    if (passoAtual > totalPassos) return; 
    printf("Esquerda\n");
    moverRainha(passoAtual + 1, totalPassos); 
}


void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do CAVALO:\n");

    
    for (int i = 1, movimento = 0; i <= casasCima; i++, movimento++) {
        printf("Cima\n");

        
        for (int j = 1; j <= casasDireita; j++) {
            if (i < casasCima) {
                // Ainda não é o momento de mover horizontalmente
                continue;
            }
            printf("Direita\n");
            break; // encerra o movimento horizontal após 1 casa
        }
    }
}

// ============================================================
// PROGRAMA PRINCIPAL
// ============================================================
int main() {
    // ---------- TORRE ----------
    printf("Movimento da TORRE:\n");
    moverTorre(1, 5); // 5 casas para a direita
    printf("\n");

    // ---------- BISPO ----------
    printf("Movimento do BISPO:\n");
    moverBispo(1, 5); // 5 casas na diagonal superior direita
    printf("\n");

    // ---------- RAINHA ----------
    printf("Movimento da RAINHA:\n");
    moverRainha(1, 8); // 8 casas para a esquerda
    printf("\n");

    // ---------- CAVALO ----------
    moverCavalo(); // 2 para cima, 1 para a direita

    return 0;
}
