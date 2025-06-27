#include "pilha.h"
#include <stdio.h>

void inicializar(PilhaChar* p) {
	p->topo = 0;
}

// mudei o retorno para int
int pushChar(PilhaChar* p, char c) {
	if (p->topo == 50) {
		return 0; // pilha cheia! 50 foi definido no .h
	}
	p->dados[p->topo] = c;
	p->topo++;
	return 1;
}

char popChar(PilhaChar* p) {
	if (p->topo > 0) {
		p->topo--;
		char dado = p->dados[p->topo];
		p->dados[p->topo] = '\0';
		return dado;
	} else {
		return '\0';
	}
}

char topChar(PilhaChar* p) {
	return p->dados[p->topo-1];
}

// mudei o retorno para int
int vazia(PilhaChar* p) {
	return (p->topo == 0);
}

void exibir(PilhaChar* p) {
	int i;
	for (i = p->topo-1; i >= 0; i--) {
		printf("Pos %d: %c \n", i, p->dados[i]);
	}
}
