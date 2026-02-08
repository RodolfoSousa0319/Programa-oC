#include <stdio.h>
#include <string.h>


//inserção de struct territorio
struct territorio {
        char nome [30];
        char cor [10];
        int tropa;

    }territorio [5];  
    
       

int main() {       
    
    int i;  
    
    printf ("========================== \n");
    printf ("  Cadastro do Território \n");
    printf ("========================== \n");

    
    printf ("\nVamos cadastrar os 5 territórios iniciais do nosso mundo.\n");   
    
    //coleta de dados 
    for (i = 1; i < 6; i++) {        
        
        printf ("\n\n---- Cadastrando Território %d -----\n" , i);        

        printf ("Nome do território: ");
        scanf ("%s", &territorio[i].nome);

        printf ("Cor do Exército (ex: azul, verde...): ");
        scanf ("%s", &territorio[i].cor);

        printf ("Número de Tropas: ");        
        scanf ("%d", &territorio[i].tropa);

    } //fim coleta de dados
    

    printf ("\n\n=============================================\n");
    printf ("        MAPA DO MUNDO = ESTADO ATUAL         \n");
    printf ("=============================================\n\n\n");

    //percorrer o vetor territorio
    for (i = 1; i < 6; i++ ) {

    printf ("TERRITORIO %d:\n" , i );     
    printf ("   - Nome: %s\n", territorio[i].nome);
    printf ("   - Cor: %s\n", territorio[i].cor);
    printf ("   - Tropas: %d\n\n", territorio[i].tropa);

    }  

   return 0;
   
}
