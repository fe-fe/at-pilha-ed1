typedef struct {
	char discos[50];
	int topo;
} Pilha;

// Funções a implementar:
void inicializar(Pilha* p);
int push(Pilha* p, int disco);
int pop(Pilha* p);
int top(Pilha* p);
int vazia(Pilha* p);
void exibir(Pilha* p);

 