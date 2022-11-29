#include <stdio.h>
#include <stdlib.h>

/* PG a1 = 2  q = 3
   2, 6, 18, 54, 162, ...
 a)  Gere n termos dessa PG, onde n eh digitado pelo usuario
   Usuario vai informar o termo inicial a1 e a razao q
 b) Calcule a soma do n termos gerados;
 */

int main(int argc, char *argv[]) {
	int n = 0, a1 = 0, q=0, i=1, termo_ant, termo_prox, soma = 0;
	
	printf("\n Digite o numero de termos da PG: ");
	scanf("%d", &n);
	
	printf("\n Digite o termo inicial da PG: ");
	scanf("%d", &a1);
	
	printf("\n Digite a razao da PG: ");
	scanf("%d", &q);
	termo_ant = a1;
	soma = a1;
	printf("\n%d", a1);
	while(i < n)
	{
		termo_prox = termo_ant * q;	
		printf("\n%d", termo_prox);	
		soma = soma + termo_prox;	
		termo_ant = termo_prox;
		
		i++;
	}
	printf("\n Soma = %d", soma);
	return 0;
}
