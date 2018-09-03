#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Usuario {
	char nome[30];
	int idade;
} Usuario;

void inclui(usuario *pNovo);
void lista(usuario *pNovo);
void buscar(char *nomeAux, Usuario *pNovo, Usuario *pInicio, int *st);

int main() {
	void *pBuffer;
	int *st,*opcao,*f;
	char *nomeAux;
	Usuario *pInicio;
	Usuario *pNovo;
