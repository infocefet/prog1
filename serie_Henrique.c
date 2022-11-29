#include <stdio.h>
#include <stdlib.h>

/* 

1, 2, 3, 4, 5, 6
1, 4, 6, 7, 11, 10, 16, 13


*/

int main(int argc, char *argv[]) {
	int t1 = 1, t2 = 4, proximo, i;
	
	printf("%d\n%d", t1, t2);
	for(i = 3; i < 10; i++)
	{
		if(i%2 == 0)
		{
			proximo = t1 + 3;
		}else
		{
			proximo = t1 + 5;
		}
		printf("\n%d", proximo);
		t1 = t2 ;
		t2 = proximo;
	}
	return 0;
}
