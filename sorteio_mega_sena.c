#include <stdio.h>
#include <stdlib.h>

/*
while
     
     while(condicao)
     {
     
 	 }
    
do-while 

	do{
	
	}while(condicao);
*/

int main(int argc, char *argv[]) {
	
	int dez1, dez2, dez3;
	
	srand(time(NULL));
	
	dez1 = 1 + rand() % 60;
	
	do
	{
		dez2 = 1 + rand() % 60;
	}while(dez2 == dez1);
	
	do
	{
		dez3 = 	1 + rand() % 60;
	}while(dez3 == dez2 || dez3 == dez1);
	
	printf("\n Dezenas : %d, %d, %d", dez1, dez2, dez3);
	return 0;
}
