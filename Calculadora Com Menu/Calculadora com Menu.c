#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){  
    //Para usar acentos
    setlocale(LC_ALL, "");
 
 //Programa Criado por Rafael Ramos, Taubaté, 20/01/2023.
 
    /*Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 opções:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida
    com os dois valores lidos.*/
    

    	//Definindo variaveis
    	float numA, numB, result1, result2, result3, result4;
    	int a;
    	
    	//Coletando dados do usuário
    	printf("\nDigite os valores das operações: ");
    	printf("\nPrimeiro valor: ");
    	scanf("%f", &numA);
    	printf("\nSegundo valor: ");
    	scanf("%f", &numB);
    	printf("\nOs valores são %.2f e %.2f! Qual operação deseja fazer?\n", numA, numB);
    	printf("Digite 1 para Somar \nDigite 2 para Subtrair \nDigite 3 para Dividir \nDigite 4 para Multriplicar  \ndigite 5 para sair! \n\n");
    	scanf("%d", &a);
    	
    	//Menu da calculadora e operações
    	switch(a){
    		case 1:
    			printf("\nResultado da Soma é: %.2f\n\n", numA + numB);
    			break;
    		case 2:
    			printf("\nResultado da Subtração é: %.2f\n\n", numA - numB);
    			break;
    		case 3:
    			printf("\nResultado da Divisão é: %.2f\n\n", numA / numB);
    			break;
    		case 4:
    			printf("\nResultado da Multiplicação é: %.2f\n\n", numA * numB);
    			break;
    		default:
    			printf("\nOperação Cancelada!\n\n");
    			break;
	}
	//Fim do programa
	system("pause");
 }
 
