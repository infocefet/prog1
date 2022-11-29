#include <stdio.h>
#include <stdlib.h>
#include "math.h"
/* ax2 +bx + c
delta 

 */

int main(int argc, char *argv[]) {
	int a, b, c;
	float delta, x1, x2;
	
	printf("\n Digite o coeficiente a:");
	scanf("%d", &a);
	printf("\n Digite o coeficiente b:");
	scanf("%d", &b);
	printf("\n Digite o coeficiente c:");
	scanf("%d", &c);
	
	delta = pow(b,2) - 4*a*c; //pow = power
	x1 = (-1*b + sqrt(delta))/(2*a); //sqrt = square root
	x2 = (-1*b - sqrt(delta))/(2*a);
	
	printf("x1 = %.2f e x2 = %.2f", x1,x2);
	return 0;
}
