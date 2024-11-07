#include <stdio.h>
#include <stdlib.h>

#define TAMPILHA 10

int pilha[TAMPILHA] = {0,0,0,0,0,0,0,0,0,0};
int topo = 0;

//Funcao Inserir

void push(){
    int val; //vai criar uma variavel para receber o numero do usuario
    printf("Digite um numero inteiro: ");
    scanf("%d", &val);

if(topo < TAMPILHA){
    pilha[topo]= val;//o que vou falar
    topo = topo + 1;
    lista_elementos(); // vamos criar ainda
    }else{
            printf("Nao ha mais espacos");
    }
}
void lista_elementos(){  //função para exibir a saida
    printf("\n================PILHA ATUAL===============\n");
    for(int i = 0;i < TAMPILHA; i++){
        printf("--");
        printf("|%d|", pilha [i]);
        printf("-");
}
        printf("\nTopo: %d\n\n", topo);
}

void pop(){
    if(topo > 0){ //para remover o topo tem que ser miaor que 0 (0 a pilha está vazia).
            pilha [topo-1] = 0; // a posição vai receber 0 que significa que esta vazio
           //para remover um elemento o topo tem que set -1, por que se removermos somente o topo não tera ninguém para apagar
            topo = topo - 1;
            lista_elementos();
    }else{
    printf("Pilha Vazia");
        }
    }

    void clear(){
    for (int i = 0; i < TAMPILHA; i++){
        pilha[i] = 0; //vai percorrer toda a fila zerando as posições
    }
    topo = 0;
    }

int main(){
int opcao = 0;
do{
printf("\n Aula do dia 19/04 ---- Aula do Shaba. \n\n");
printf("SELECIONE A OPCAO: \n\n");
printf("[1] - Inserir (push):\n");
printf("[2] - Remover (pop):\n");
printf("[3] - Listar:\n");
printf("[4] - Limpar:\n");
printf("[-1] - Sair:\n");
printf("SELECIONE A OPCAO DESEJADA: ");
scanf("%d", &opcao);

switch (opcao){

    case 1: push();
        break;
    case 2: pop();
        break;
    case 3: lista_elementos();
        break;
    case 4: clear(), lista_elementos();
        break;
    case 5:
        break;
        }
    }while(opcao != -1);
return 0;
system ("pause");
}


