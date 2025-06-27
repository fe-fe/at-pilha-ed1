#include "pilha.h"

typedef struct {
    Pilha torre[3]; // Torres A, B, C
    int num_discos;
} JogoHanoi;

void inicializarHanoi(JogoHanoi* jogo, int n);
int moverDisco(JogoHanoi* jogo, int origem, int destino);
void resolverHanoi(JogoHanoi* jogo, int n, int origem, int destino, int auxiliar);