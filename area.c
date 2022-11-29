#include <stdio.h>
#include <stdlib.h>


/* 1- Area de circulo
   2 - Area de triangulo
   3 - Area do quadrado */
#define PI 3.14

int main(int argc, char *argv[]) {
	int opcao;
	float area, raio, base, altura, lado;

	
	while(1) //loop infinito
	{
		printf(" 1- Area de circulo \n 2 - Area de triangulo \n 3 - Area do quadrado \n 4 - Sair \n Digite a opcao > ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1:
				printf("\n Digite o raio: ");
				scanf("%f", &raio);
				area = PI * raio * raio;
				printf("\n Area = %.2f", area);
				break;
			case 2:	
				printf("\n Digite a base: ");
				scanf("%f", &base);
				printf("\n Digite a altura: ");
				scanf("%f", &altura);
				area = (base * altura)/2;
				printf("\n Area = %.2f", area);
				break;
			case 3:	
				printf("\n Digite o lado: ");
				scanf("%f", &lado);
				area = pow(lado,2);
				printf("\n Area = %.2f", area);
				break;
			case 4:
				exit(0); //sai do programa	
			default:
				printf("OPCAO INVALIDA!");
		}
	
	}
	return 0;
}
