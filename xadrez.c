#include <stdio.h>

static void mover_torre_rec(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    mover_torre_rec(passos - 1);
}

static void mover_bispo_rec(int passos) {
    if (passos <= 0) return;
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo_rec(passos - 1);
}

static void mover_bispo_loops(int passos) {
    for (int v = 0; v < passos; v++) { 
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
}

static void mover_rainha_rec(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    mover_rainha_rec(passos - 1);
}

static void mover_cavalo_complexo(int alvo_cima, int alvo_direita) {
    int cima = 0;
    int direita = 0;

    for (int fase = 0; fase < 2; fase++) {
        int step = 0;
        while (step < 3) {                
            if (fase == 0) {              
                if (cima >= alvo_cima) {
                    break;                
                }
                printf("Cima\n");
                cima++;
                step++;
                continue;                 
            } else {                      
                if (direita >= alvo_direita) {
                    break;                
                }
                printf("Direita\n");
                direita++;
                step++;
                
            }
        }
    }
}

int main(void) {
    
    const int PASSOS_TORRE   = 5;
    const int PASSOS_BISPO   = 5;
    const int PASSOS_RAINHA  = 8;
    const int CAVALO_CIMA    = 2;
    const int CAVALO_DIREITA = 1;

    printf("Inicio\n\n");

    printf("Torre (Recursivo) — %d casas para a Direita\n", PASSOS_TORRE);
    mover_torre_rec(PASSOS_TORRE);
    printf("\n");

    printf("Bispo (Recursivo) — %d passos diagonais (Cima + Direita)\n", PASSOS_BISPO);
    mover_bispo_rec(PASSOS_BISPO);
    printf("\n");

    printf("Bispo (Loops Aninhados) — %d passos diagonais (Cima + Direita)\n", PASSOS_BISPO);
    mover_bispo_loops(PASSOS_BISPO);
    printf("\n");

    printf("Rainha (Recursivo) — %d casas para a Esquerda\n", PASSOS_RAINHA);
    mover_rainha_rec(PASSOS_RAINHA);
    printf("\n");

    printf("Cavalo (Loops complexos) — 2 para Cima e 1 para Direita\n");
    mover_cavalo_complexo(CAVALO_CIMA, CAVALO_DIREITA);
    printf("\n");

    printf("Fim\n\n");
    return 0;
}
