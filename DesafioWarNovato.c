#include <stdio.h>
#include <string.h>

typedef struct {
        char nome [30];
        char cor [10];
        int tropa;

    }territorio;

int main() {
    
    territorio territorio1;

    printf ("========================== \n");
    printf ("  Cadastro do Território \n");
    printf ("========================== \n");
    printf ("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n");

    int i;
    for ( int i = 1; i <= 6; i++) {

        printf ("---Cadastrando Território%d" , i , "---");
        printf ("\n");
        printf ("Nome do território: ");
        scanf ("%s",&territorio1.nome);        
        printf ("Cor do Exército (ex: azul, verde...): ");
        scanf ("%s",&territorio1.cor);
        printf ("Número de Tropas: ");
        scanf ("%d",&territorio1.tropa);

    }

    printf ("Nome do Território", territorio1.nome);
    printf ("Cor do Exército:", territorio1.cor);
    printf ("Número de Tropas", territorio1.tropa);

    
    

   return 0;
   
}
