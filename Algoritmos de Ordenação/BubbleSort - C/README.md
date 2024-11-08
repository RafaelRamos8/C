# Implementação do Bubble Sort em C

Este projeto implementa o algoritmo de ordenação Bubble Sort em linguagem C, com a possibilidade de analisar o desempenho em diferentes cenários (melhor caso, pior caso e caso médio). Ele também mede o tempo de execução do algoritmo usando a biblioteca `time.h`.

## O que é o Bubble Sort?

Bubble Sort é um algoritmo de ordenação simples que percorre repetidamente a lista a ser ordenada, comparando elementos adjacentes e trocando-os de lugar, se necessário. O processo se repete até que a lista esteja ordenada. Apesar de ser intuitivo, o Bubble Sort não é eficiente para listas grandes, com complexidade de tempo média e pior caso de \(O(n^2)\).

## Estrutura do Código

O código contém as seguintes funções principais:

- **RandomInteger**: Gera um número inteiro aleatório dentro de um intervalo especificado. Usado para preencher o vetor no caso médio.

- **bubbleSort**: Implementa o algoritmo Bubble Sort, organizando o vetor em ordem crescente.

- **melhorCaso**: Preenche o vetor em ordem crescente, simulando o melhor caso do Bubble Sort (em que o vetor já está ordenado).

- **medioCaso**: Preenche o vetor com valores aleatórios, simulando o caso médio do algoritmo.

- **piorCaso**: Preenche o vetor em ordem decrescente, simulando o pior caso do Bubble Sort (em que o vetor está na ordem inversa).

- **medirTempoExecucao**: Função auxiliar para medir o tempo de execução do Bubble Sort. Ela aceita como parâmetro a função de preenchimento para o vetor, permitindo testar o algoritmo em diferentes cenários.

## Como Executar o Código

### Pré-requisitos

Certifique-se de ter um compilador de C instalado, como GCC.

# Autor

Rafael da Costa Ramos

linkedin.com/in/rafael-da-costa-ramos-594128191
