#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float salario = 0, adicional = 0;
	int anos = 0, temGraduacao = 0;
	
	printf("\n Digite os anos de empresa: ");
	scanf("%d", &anos);
	printf("\n Vc tem graduacao? Digite 1-SIM ou 2-NAO: ");
	scanf("%d", &temGraduacao);
	printf("\n Digite o seu salario: ");
	scanf("%f", &salario);
	
	if(anos > 10 && temGraduacao == 1)
	{
		adicional = salario *0.2;		
	}
	printf("\n Salario base = %.2f \n Adicional = %.2f", salario, adicional);
	printf("\n Salario Total = %.2f", (salario + adicional));
	return 0;
}
