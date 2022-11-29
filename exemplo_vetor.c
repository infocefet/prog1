#include <stdio.h>
#include <stdlib.h>

/*
    3 5 4 2
	i   j  
	0   2     aux = 4*/ 
#define TAM 30


int main(int argc, char *argv[]) {
	
	int vetor[TAM], i, aux, j, numero_procurado = 0, limite_inferior = 0, limite_superior = TAM -1;
	int elemento_central = 0, achei = 0;
	
	srand(time(NULL));
	
	// Preenchendo o vetor
	for(i = 0; i < TAM; i++)
	{
		//printf("\n Digite a sua idade: ");
		//scanf("%d", &vetor[i]);
		vetor[i] = rand() % 101;
	}
	
	// Exibindo os dados do vetor
	printf("*************Exibindo os dados do vetor********");
	for(i = 0; i < TAM; i++)
	{
		printf("\n%d", vetor[i]);
	}
	
	for(i = 0; i < TAM; i++)
	{
		for(j = i+1; j < TAM; j++)
		{
			if(vetor[j] < vetor[i])
			{
				// troca os dois de posicao
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	
		// Exibindo os dados do vetor
	printf("*************Exibindo os dados do vetor ordenado********");
	for(i = 0; i < TAM; i++)
	{
		printf("\n%d", vetor[i]);
	}
	printf("\n Digite o numero procurado: ");
	scanf("%d", &numero_procurado);
	
	while(limite_inferior <= limite_superior)
	{
		elemento_central = (limite_inferior + limite_superior)/2;
		if(numero_procurado == vetor[elemento_central])
		{
			//achei
			achei = 1;
			printf("\n Achei o numero procurado na posicao %d", elemento_central);
			break;
		}else 
		{
			//nao eh igual ao elemento central
			if(numero_procurado < vetor[elemento_central])
			{
				//vou procurar a esquerda do elemento central
				limite_superior = elemento_central -1;
								
			}else
			{
				//vou procurar a direita do elemento central
				limite_inferior = elemento_central + 1;
			}
		}
	}
	
	if(achei == 0)
	{
		printf("\n O numero nao consta na lista");
	}
	return 0;
}
