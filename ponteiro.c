#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *m;/* ponteiro para int*/
    int contador =100;
    /* a variável ponteiro m aponta para a variável contador */
    m = &contador;
    /* imprime o endereço da variável contador */
    printf("Endereco= %p\n",m);
    /* imprime o conteúdo da variável contador */
    printf("Conteudo= %d\n",*m);
}
