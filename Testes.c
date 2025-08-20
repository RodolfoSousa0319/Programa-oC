#include <stdio.h>


int main () {

int Populacao;
float PIB, media;



printf("Populacao: ");
scanf("%d", &Populacao);

printf("Pib: ");
scanf("%f", &PIB);

media = (float) PIB / Populacao;

printf("Media: %.2f\n", media);

return 0;


}
