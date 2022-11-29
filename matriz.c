#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define ALUNOS 5
#define PROVAS 3
int main(int argc, char *argv[]) {
	float notas[ALUNOS][PROVAS]; //cria uma matriz 5x2
	int i, j;
	float soma = 0;
	//semente do gerador de numeros
	srand(time(NULL));
	
	//gerando notas dos alunos
	for(i = 0; i < ALUNOS; i++)
	{
		soma = 0;
		for(j = 0; j < PROVAS -1; j++)
		{
			notas[i][j] = (rand() % 101)/10.0; //(500+ (rand() % 501))/10.0; 
			soma += notas[i][j];
		}
		
		//calcular a media
		notas[i][PROVAS -1] = soma / (PROVAS - 1);
	}
	//exibir a matriz
	printf("\tP1\tP2\tMedia\tSituacao\n");
	for(i = 0; i < ALUNOS; i++)
	{
		//mudou o aluno
		printf("ALUNO %d\t",(i+1));
		for(j = 0; j < PROVAS; j++)
		{	
			//exibe cada nota desse aluno
			printf("%.1f\t", notas[i][j]);
		}
		
		if(notas[i][PROVAS -1]>=7)
		{
			printf("APROVADO");
		}else
		{
			printf("FINAL");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
