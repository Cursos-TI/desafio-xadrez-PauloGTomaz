#include <stdio.h>

int main() {
    // ==========================
    // Simulação da TORRE
    // ==========================
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

    printf("\n");

    
    // Simulação do CAVALO
    
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do CAVALO:\n");

    // Loop externo (for): movimenta para baixo
    for (int passoBaixo = 1; passoBaixo <= casasBaixo; passoBaixo++) {
        printf("Baixo\n");

        // Loop interno (while): após o último movimento para baixo,
        // faz o movimento perpendicular (para a esquerda)
        if (passoBaixo == casasBaixo) {
            int passoEsquerda = 1;
            while (passoEsquerda <= casasEsquerda) {
                printf("Esquerda\n");
                passoEsquerda++;
            }
        }
    }

    return 0;
}
