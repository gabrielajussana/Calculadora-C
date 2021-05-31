/*CALCULADORA C*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	
	int opc, qtd; 
	float num1, num2, soma, sub, div, mul,pot,rad; 
	
	
	printf("-----------MENU--------------");
	printf("\n1.Soma");
	printf("\n2.Subtração");
	printf("\n3.Multiplicação");
	printf("\n4.Divisão");
	printf("\n5.Potenciação");
	printf("\n6.Raiz Quadrada");
	printf("\n\nEscolha uma opção: ");
	
	
	scanf("%d", &opc);
	fflush(stdin);
	
	switch(opc){
		case 1:
		     printf("\nDigite o 1º número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     printf("\nDigite o 2º número: ");
		     scanf("%f", &num2);
		     soma = num1 + num2;
		     printf("Resultado: %.2f", soma);
			break;
		case 2:
			 printf("\nDigite o 1º número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     printf("\nDigite o 2º número: ");
		     scanf("%f", &num2);
		     sub = num1 - num2;
		     printf("Resultado: %.2f", sub);
		    break;
		case 3:
			 printf("\nDigite o 1º número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     printf("\nDigite o 2º número: ");
		     scanf("%f", &num2);
		     mul = num1 * num2;
		     printf("Resultado: %.2f", mul);
		    break;
		case 4:
			 printf("\nDigite o 1º número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     printf("\nDigite o 2º número: ");
		     scanf("%f", &num2);
		     div = num1 / num2;
		     printf("Resultado: %.2f", div);
		    break;
		case 5:
			printf("\nDigite o 1º número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     printf("\nDigite o 2º número: ");
		     scanf("%f", &num2);
		     pot = pow(num1, num2);
		     printf("Resultado: %.2f", pot);
		    break;
		case 6:
			printf("\nDigite o número: ");
		     scanf("%f", &num1);
		     fflush(stdin);
		     rad = sqrt(num1);
		     printf("Resultado: %.2f", rad);
		    break;
	}
	
	
   return 0;	
 
} 
