#include <stdio.h>
#include <stdlib.h>

/* O cmando While : comando de repeticao

	while(condicao)
	{

	}

 */

int main(int argc, char *argv[]) {
	int i = 0, numero, soma = 0;
	
/*	while(i < 10)
	{
		printf("\n%d", i);
		i++;
	}*/
	
/*	for(i = 0; i < 10; i++)
	{
		printf("\n%d", i);	
	}*/
	
	while(1) //Em C, 0 eh falso e qualquer coisa que nao seja zero eh verdadeiro
	{
		printf("\n Digite um numero: ");
		scanf("%d", &numero);
		
		if(numero != 0)
		{
			soma = soma + numero;
		}else
		{
			//se chegar aqui eh pq o numero eh zero		
			break;
		}
	}
	printf("\n Soma = %d", soma);
	return 0;
}
