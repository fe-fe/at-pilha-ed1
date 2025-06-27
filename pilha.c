#include "pilha.h"
#include <stdio.h>

void inicializar(Pilha* p) {
	p->topo = 0;
}

// mudei o retorno para int
int push(Pilha* p, int disco) {
	if (p->topo == 50) {
		return 0; // pilha cheia! 50 foi definido no .h
	}
	p->discos[p->topo] = disco;
	p->topo++;
	return 1;
}

int pop(Pilha* p) {
	if (p->topo > 0) {
		p->topo--;
		int disco = p->discos[p->topo];
		p->discos[p->topo] = '\0';
		return disco;
	} else {
		return '\0';
	}
}

int top(Pilha* p) {
	return p->discos[p->topo-1];
}

// mudei o retorno para int
int vazia(Pilha* p) {
	return (p->topo == 0);
}

void exibir(Pilha* p) {
	int i;
	for (i = p->topo-1; i >= 0; i--) {
		printf("Pos %d: %d \n", i, p->discos[i]);
	}
}
