#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char senha[8], senha_digitada[8];
	strcpy(senha, "abcd");
	
	printf("\n Digite a senha: ");
	gets(senha_digitada);
	
	if(strcmp(senha_digitada, senha) == 0)
	{
		printf("\n Seja bem-vindo!");
	}else
	{
		printf("\n Senha incorreta!");
	}
	return 0;
}
