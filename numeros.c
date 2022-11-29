#include <stdio.h>
#include <stdlib.h>

/* */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int i, numero = 0;
	
	for(i = 0; i < 6; i++)
	{
		numero = 1 + (rand() % 60);
		printf("\n%d", numero);
	}
	return 0;
}
