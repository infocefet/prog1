#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fatorial(int n);
void linha1(void);

int main(int argc, char *argv[]) {
	
	int numero, i;
	if(argc == 3)
	{
		numero = atoi(argv[2]);
	}else
	{
		printf("\n Digite um numero: ");
		scanf("%d", &numero);
	}
	
	//chamda da funcao
	int resultado = fatorial(numero);
	if(resultado == -1)
	{
		perror("Erro ao calcular o fatorial!");
	}else
	{
		printf("\n Resultado = %d", resultado);
	}
	
	linha1();
	linha1();
	linha1();
	return 0;
}

/* Desenha uma linha solida na tela de 20 caracteres. */
void linha1(void){
 int i;
 for(i =0;i <=20;i++)
 {
 	printf("-");
 }
 printf("\n");
 return;
}
int fatorial(int n)
{
	if(n < 0)
	{
		return -1; //erro
	}else if(n == 0)
	{
		return 1;
	}else
	{
	
		int i, fat = 1;
		for(i = n; i >=1; i--)
		{
			fat *= i;
		}
		return fat;	
	}
		
}
