#include <stdio.h>
#include <stdlib.h>

/* Esse eh o nosso primeiro programa*/
#define PI 3.14
int main(int argc, char *argv[]) {
//	const float PI = 3.14;
	// qualquer coisa....
	int idade, a = 4, b= 9; //declarando variavel como sendo inteira
	float altura = 1.70;
 	
	//idade = 36; //inicializando a variavel com o valor 36
	printf("Oi, turma!");
	printf("\nDigite a sua idade:");
	scanf("%d",&idade);
	printf("\nIdade = %d e altura = %.2f", idade, altura);
	if(idade >= 18)
	{
		printf("\n Pode tirar a CNH!");
	}else 
	{
		if(idade <16)
		{
			printf("\n Impossibilitado de tirar a CNH!");
		}else
		{
			printf("\n Pode iniciar o curso pra CNH!");
		}
	}
	
	return 0;
}
