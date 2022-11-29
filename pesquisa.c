#include <stdio.h>
#include <stdlib.h>

/* Algoritmo de Pesquisa Binaria  
procuro: 13
	11 numeros de 0 a 100 ordenados
 5 - 8 - 12 - 27 - 32 - 39 - 60 - 70 - 82 - 86 -100 */

#define TAM 40
int main(int argc, char *argv[]) {
	int numeros[40], i, numero_procurado = 0, achei = 0; //achei = 0, significa que nao achei e 1 significa que achei
	
	// Passar a "semente" para o gerador de numeros : para os numeros ficarem mais aleatorios
	srand(time(NULL));
	
	for(i = 0; i < TAM; i++)
	{
		numeros[i] = rand() % 81; //divido por 201 e pego o resto:> fico na faixa de 0 a 200;
		printf("\n%d", numeros[i]);
	}
	
	printf("\n Digite o numero procurado: ");
	scanf("%d", &numero_procurado);
	
	for(i = 0; i < TAM; i++)
	{
		if(numeros[i] == numero_procurado)
		{
			//achei
			achei = 1;
			printf("\n O numero procurado foi encontrado na posicao %d", i);
		
		}
	}
	
	if(achei == 0)
	{
		printf("\n O numero nao consta na lista!");
	}
	return 0;
}
