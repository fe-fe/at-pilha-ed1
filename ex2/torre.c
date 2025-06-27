#include <stdlib.h>
#include <stdio.h>
#include "torre.h"

void inicializarHanoi(JogoHanoi* jogo, int n) {
    jogo->num_discos = n;

    // Inicializar todas as torres
    for (int i = 0; i < 3; i++) {
        inicializar(&jogo->torre[i]);
    }

    // Empilhar os discos na torre A (do maior para o menor)
    for (int i = n; i >= 1; i--) {
        push(&jogo->torre[0], i);
    }
}

int moverDisco(JogoHanoi* jogo, int origem, int destino) {
    Pilha* tOrigem = &jogo->torre[origem];
    Pilha* tDestino = &jogo->torre[destino];

    if (vazia(tOrigem))
        return 0; // Sem discos para mover

    int disco = top(tOrigem);

    if (vazia(tDestino) || disco < top(tDestino)) {
        pop(tOrigem);
        push(tDestino, disco);
        printf("Move disco %d de %c para %c\n", disco, 'A' + origem, 'A' + destino);
        return 1;
    }

    return 0; // Movimento inválido
}

void resolverHanoi(JogoHanoi* jogo, int n, int origem, int destino, int auxiliar) {
    if (n == 1) {
        moverDisco(jogo, origem, destino);
        return;
    }

    resolverHanoi(jogo, n - 1, origem, auxiliar, destino);
    moverDisco(jogo, origem, destino);
    resolverHanoi(jogo, n - 1, auxiliar, destino, origem);
}

int main() {
    JogoHanoi jogo;
    int num_discos = 3;

    inicializarHanoi(&jogo, num_discos);
    resolverHanoi(&jogo, num_discos, 0, 2, 1); // A (0) → C (2) usando B (1)
    
    return 0;
}
