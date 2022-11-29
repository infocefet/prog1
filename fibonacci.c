#include <stdio.h>
#include <stdlib.h>

/* 1,1,2, 3,5,8,13,21, ...*/

int main(int argc, char *argv[]) {
	int i, t1 = 1, t2 = 1, proximo = 0, n = 0;
	
	printf("\n Digite o numero de termos a serem gerados: ");
	scanf("%d", &n);
	
	printf("%d \n%d", t1, t2);
	
	for(i = 3; i <=n; i++)
	{
		proximo = t1+ t2;
		printf("\n%d", proximo);
		t1 = t2;
		t2 = proximo;
	}
	//calcular do terceiro termo em diante
	return 0;
}
