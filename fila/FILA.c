/*RAFAEL DA COSTA RAMOS         RA: 131093512775        CIENCIA DA COMPUTAÇÃO 2 SEMESTRE
    ATIVIDADE DE ALGORITMOS E ESTRUTURA DE DADOS*/


#include <stdio.h>
#include <locale.h>
//define o tamanho da fila
#define TAMFILA 10

int fila[TAMFILA] = {0,0,0,0,0,0,0,0,0,0};
int head = 0;
int tail = 0;

//setlocale(LC_ALL,"portuguese"); //Faz com que o padrão seja da localidade da linguagem
    //setlocale(LC_ALL,NULL); | NULL não vai acentuar porque está no inglês
    //printf("%s",setlocale(LC_ALL,"portuguese") );
    //printf("Coração");


void lista_elementos(){
 printf("\n==============FILA ATUAL==============\n");
for(int i=0; i<TAMFILA;i++){
     printf("-");
     printf("|%d|",fila[i]);
     printf("-");
     }
}

//Adiciona o elemento na fila
void enqueue(){
    int val; //recebe o num do primeiro da fila.
    //se o num de elemento for menor que a fila - adiciona.
    //se não falamos que a fila está cheia

    if(tail < TAMFILA){
       printf("\nInforme o valor para adicionar na fila\n");
       scanf("%d", &val);
       fila[tail] = val;// valor correlacionado com o tail.
       tail = tail + 1; //adiciona o a quantia de tail.(incrementa 1 posição, iniciando de 0).
       lista_elementos();

    }
    else{
        printf("Não cabe, fila cheia!");
    }
}
//remove um elemento da fila - chamar
void dequeue(){
    //temos que ver se head é < que tail
    //por que se for igual a fila está vazia, não tem ninguém
    //para tirar

    if(head < tail){
           int i = 0; //declarando contador e tirando o lixo da memoria
           //enquanto for menor que tail então...
           while(i <  tail){

            /*puxando a fila (como se o contador fosse passando na fila e
            dizendo pra cada um "vai fi anda!"*/
            fila[i] = fila[i+1];
            i++;
           }
        lista_elementos();
    }

}
//função de limpar a lista
void clear(){
    for(int i = 0; i < TAMFILA; i++){
        fila[i] = 0;
    }
    head = 0;
    tail = 0;
}


int main ()
{
    int opcao = 0;

    do{

    printf("SELECIONE A OPCAO ABAIXO\n\n");
    printf("[1] - Inserir (enqueue)\n");
    printf("[2] - Remover (dequeue)\n");
    printf("[3] - Listar\n");
    printf("[4] - Limpar a fila (clean)\n");
    printf("[-1] - Sair\n");
    printf("[6] - \nDIGITE A OPCAO DESEJADA\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            enqueue();
                break;

        case 2:
            dequeue();
                break;

        case 3:
            lista_elementos();
                break;

        case 4:
            clear();
                break;

        case -1:
            printf("sair...");
                break;

        default:
            printf("Opcao Invalida");
                break;

    }
    }while(opcao != -1);
return 0;
}


