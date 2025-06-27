#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
	PilhaChar* p = malloc(sizeof(PilhaChar));
	
	if (p == NULL) {
		printf("Erro na alocacao da pilha!");
		return;
	}

	inicializar(p);
	pushChar(p, 'A');
	pushChar(p, 'B');
	pushChar(p, 'C');
	pushChar(p, 'D');
	pushChar(p, 'E');
	exibir(p);
	
	printf("\n\n");
	
	popChar(p);
	printf("%c\n", topChar(p));
	popChar(p);
	printf("%c\n", topChar(p));
	popChar(p);
	printf("%c\n", topChar(p));
	popChar(p);
	printf("%c\n", topChar(p));

	printf("\n\n");

	exibir(p);

	scanf("");
}