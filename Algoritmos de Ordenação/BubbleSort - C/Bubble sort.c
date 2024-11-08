//Nome: Rafael da Costa Ramos ---- RA:131093512775 ----- Ciï¿½ncia da Computaï¿½ï¿½o 4ï¿½ Semestre   31/05/2024

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // clock(), CLOCKS_PER_SEC e clock_t

#define TAM 1000 // constante para tamanho do vetor

int RandomInteger(int low, int high) {
    return (rand() % (high - low + 1)) + low;
}

void bubbleSort(int v[], int n) {
    int a, b, aux;
    for (a = n - 1; a >= 1; a--) {
        for (b = 0; b < a; b++) {
            if (v[b] > v[b + 1]) {
                aux = v[b];
                v[b] = v[b + 1];
                v[b + 1] = aux;
            }
        }
    }
}

    // Preencher o vetor com valores em ordem crescente (melhor caso)
    void melhorCaso(int v[], int n){
    for (int a = 0; a < n; a++) {
        v[a] = a + 1;
    }
}
    // Preencher o vetor com valores aleatorios (medio caso)
    void medioCaso(int v[], int n){
    	for (int a = 0; a < n; a++) {
        v[a] = RandomInteger(0, n);
	}
}
    // Preencher o vetor com valores em ordem decrescente (pior caso)
    void piorCaso(int v[], int n){
    	for (int a = 0; a < n; a++) {
        v[a] = n - a;
	}
}
	// Função para medir e imprimir o tempo de execução
	void medirTempoExecucao(void (*funcPreencher)(int[], int), int v[], int n) {
	    funcPreencher(v, n); // Chama a função de preenchimento (melhor, médio ou pior caso)
	    
	    clock_t tempo_inicial, tempo_final;
	    tempo_inicial = clock(); // Tempo inicial
	    bubbleSort(v, n); // Executa o bubble sort
	    tempo_final = clock(); // Tempo final
	
	    double tempo_execucao = ((double)(tempo_final - tempo_inicial)) * 1000.0 / CLOCKS_PER_SEC;
	    printf("Tempo de execucao: %lf ms\n", tempo_execucao);
}	

int main() {
   srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int lista[TAM]; // Vetor com TAM posições

    /*printf("BUBBLE SORT - CASO MÉDIO\n");
    medirTempoExecucao(medioCaso, lista, TAM);*/

    printf("BUBBLE SORT - PIOR CASO\n");
    medirTempoExecucao(piorCaso, lista, TAM);

    /*printf("BUBBLE SORT - MELHOR CASO\n");
    medirTempoExecucao(melhorCaso, lista, TAM);*/
	return 0;  
}
