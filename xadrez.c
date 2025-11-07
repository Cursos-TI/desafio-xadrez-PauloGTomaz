#include <stdio.h>

int main() {
    
    // Simulação da TORRE
    
    
    int movimentoTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); 

    
    // Simulação do BISPO
    
    
    int movimentoBispo = 5;
    int i = 1;
    printf("Movimento do BISPO:\n");
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    
    // Simulação da RAINHA
    
    int movimentoRainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
