#include <stdio.h>
#include <stdlib.h>

/* z = mae - x - y */

int main(int argc, char *argv[]) {
	int x, y, z, mae;
	printf("\n Digite a idade de um do seu filho X: ");
	scanf("%d", &x);
	printf("\n Digite a idade de um do seu filho Y: ");
	scanf("%d", &y);
	
	printf("\n Digite a sua idade: ");
	scanf("%d", &mae);
	z = mae -x-y;
	printf("\n Z tem %d anos", z);
	//caso 1  - X eh mais velho
	if((x > y) && (x >z)) //x > y E x > z
	{
		printf("\n X eh o mais velho!");
	}else if((y>x) && (y > z))
	{
		printf("\n Y eh o mais velho!");
	}else
	{
		printf("\n Z eh o mais velho!");
	}
	return 0;
}
