#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char nome[50];
    int idade;
    int posicao;

}Cadastro;


int main () {

    Cadastro* P = (Cadastro*)malloc(sizeof(Cadastro));
    if (P == NULL) return 1;


    printf ("Digite o nome: ");    
    scanf ("%s", P->nome);

    printf("Digite a idade: ");    
    scanf ("%d", &P->idade);

    printf ("Digite a posição: ");
    scanf ("%d", &P->posicao);


    printf ("%s tem, %d anos e ocupa a posição %d!!\n\n", P->nome, P->idade, P->posicao);   

free(P);

return 0;


}
