#include <stdio.h>

// =========================
// RECURSIVIDADE - TORRE
// =========================
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// =========================
// RECURSIVIDADE - RAINHA
// =========================
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =========================
// BISPO: recursivo + loops aninhados
// externo = cima / interno = direita
// =========================
void moverBispo(int casas) {
    if (casas == 0) return;

    int i = 0;

    // loop externo (vertical)
    while (i < 1) {
        int j = 0;

        // loop interno (horizontal)
        while (j < 1) {
            printf("Cima Direita\n");
            j++;
        }

        i++;
    }

    moverBispo(casas - 1);
}

// =========================
// CAVALO: loops complexos
// 2 casas para cima, 1 para direita
// com break e continue
// =========================
void moverCavalo() {

    int i, j;

    printf("\n=== CAVALO ===\n");

    // duas casas para cima
    for (i = 1; i <= 3; i++) {

        if (i == 3) {
            break; // limita a 2 movimentos reais
        }

        printf("Cima\n");
        continue;
    }

    // uma casa para direita
    for (j = 1; j <= 1; j++) {
        printf("Direita\n");
    }
}

int main() {

    // =========================
    // TORRE
    // =========================
    printf("=== TORRE ===\n");
    moverTorre(5);

    // =========================
    // BISPO
    // =========================
    printf("\n=== BISPO ===\n");
    moverBispo(5);

    // =========================
    // RAINHA
    // =========================
    printf("\n=== RAINHA ===\n");
    moverRainha(8);

    // =========================
    // CAVALO
    // =========================
    moverCavalo();

    return 0;
}