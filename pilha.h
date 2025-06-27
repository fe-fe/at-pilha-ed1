typedef struct {
	char dados[50];
	int topo;
} PilhaChar;

// Funções a implementar:
void inicializar(PilhaChar* p);
int pushChar(PilhaChar* p, char c);
char popChar(PilhaChar* p);
char topChar(PilhaChar* p);
int vazia(PilhaChar* p);
void exibir(PilhaChar* p);

// Teste: Empilhe as letras A, B, C, D e depois desempilhe todas
 