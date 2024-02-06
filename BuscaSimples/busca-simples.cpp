#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <string>
#include <iostream>
#include <locale.h>
#define TAM 10

using namespace std;

static void imprime_vetor(int vetor[TAM]) {

	// Auxiliar contador
	int cont;

	// Imprime o vetor
	for (cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
}

static int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {

	// Auxiliar contador
	int cont;

	// Verifica se o valor foi encontrado
	bool valorEncontrado = false;

	// Percorre a lista em busca do valor
	for (cont = 0; cont < TAM; cont++) {
		if (vetor[cont] == valorProcurado) {
			valorEncontrado = true;
			*posicaoEncontrada = cont;
		}
	}

	if (valorEncontrado) {
		return 1;
	} else {
		return -1;
	}
}

int main() {
	setlocale(LC_ALL, "");

	int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int cont;

	imprime_vetor(vetor);

	printf("\nQual número deseja encontrar? ");
	scanf_s("%d", &valorProcurado);

	if (busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1) {
		cout << "O valor foi encontrado na posição: " << posicaoEncontrada;
	} else {
		cout << "Valor não encontrado";
	}

	return 0;
}