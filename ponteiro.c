#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *m;/* ponteiro para int*/
    int contador =100;
    /* a vari�vel ponteiro m aponta para a vari�vel contador */
    m = &contador;
    /* imprime o endere�o da vari�vel contador */
    printf("Endereco= %p\n",m);
    /* imprime o conte�do da vari�vel contador */
    printf("Conteudo= %d\n",*m);
}
