#include <stdio.h>

static void mover_torre_for(int passos) {
    const char *DIRECAO = "Direita";
    for (int i = 0; i < passos; i++) {
        printf("%s\n", DIRECAO);
    }
}

static void mover_bispo_while(int passos) {
    int i = 0;
    const char *D1 = "Cima";
    const char *D2 = "Direita";
    while (i < passos) {
        printf("%s %s\n", D1, D2);
        i++;
    }
}

static void mover_rainha_do_while(int passos) {
    int i = 0;
    const char *DIRECAO = "Esquerda";
    if (passos <= 0) return;
    do {
        printf("%s\n", DIRECAO);
        i++;
    } while (i < passos);
}

int main(void) {
    const int PASSOS_TORRE  = 5;
    const int PASSOS_BISPO  = 5;
    const int PASSOS_RAINHA = 8;

    printf("Inicio\n\n");

    printf("Torre (FOR) — %d casas para a Direita\n", PASSOS_TORRE);
    mover_torre_for(PASSOS_TORRE);
    printf("\n\n");

    printf("Bispo (WHILE) — %d casas na diagonal Cima Direita\n", PASSOS_BISPO);
    mover_bispo_while(PASSOS_BISPO);
    printf("\n\n");

    printf("Rainha (DO-WHILE) — %d casas para a Esquerda\n", PASSOS_RAINHA);
    mover_rainha_do_while(PASSOS_RAINHA);
    printf("\n\n");

    printf("Fim\n\n");

    return 0;
}
