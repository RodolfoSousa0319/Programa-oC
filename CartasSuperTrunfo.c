#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Parte inicial com scanf para ler os dados
// Parte final com printf para imprimir os dados

int main() {
    
    //Todas as variáveis da carta 1, estão com a terminação 1.
    //Todas as variáveis da carta 2, estão com a terminação 2.

    int Populacao1, Populacao2, Ponto_Turistico1, Ponto_Turistico2;
    float Area1, Area2, PIB1, PIB2, DensidadePop1, DensidadePop2, PIBperCapita1, PIBperCapita2;    
    char Estado1[15], Nome_Cidade1[20], Codigo_Carta1[5]; 
    char Estado2[15], Nome_Cidade2[20], Codigo_Carta2[5];

    printf("DESAFIO DAS CARTAS\n");

    printf("\n"); //utilizado para saltar uma linha
    
    printf("Digite os dados da Carta 1 abaixo: \n");  //identificação da primeira carta

    printf("Estado? ");
    scanf("%s", Estado1);  //leitura do estado da primeira carta

    printf("Codigo? ");
    scanf("%s", Codigo_Carta1); //leitura do codigo da cidade como string

    printf("Nome da Cidade? ");
    scanf("%s", Nome_Cidade1); //leitura do nome da cidade
        
    printf("População? ");
    scanf("%d", &Populacao1); //leitura do numero da população
    
    printf("Área em km²? ");
    scanf("%f", &Area1); //leitura da área (em km²)

    printf("PIB em bilhões de reais? ");
    scanf("%f", &PIB1); //leitura do valor do PIB

    printf("Números de Pontos Turísticos? ");
    scanf("%d", &Ponto_Turistico1); // leitura da quantidade de pontos turísticos

    
    //Calculo da densidade demográfica carta 1
    //utilização do casting para (float))
    DensidadePop1 = (float) Populacao1 / Area1;

    //Calculo do Pib per Capita carta 1 
    //utilização do casting para (float)
    //conversão do PIB para todas as casas decimais
    PIB1 = PIB1 * 1000000000; 
    PIBperCapita1 = (float) PIB1 / Populacao1;
      
    printf("\n"); //utilizado para saltar uma linha e organizar melhor
       
    
    //No código abaixo será realizado a leitura de todos os dados da segunda carta.
    printf("Digite os dados Carta 2 abaixo: \n");  //identificação da segunda carta 
    
    printf("Estado? ");
    scanf("%s", Estado2); //leitura do estado

    printf("Codigo? ");
    scanf("%s", Codigo_Carta2); //leitura do codigo da cidade
    
    printf("Nome da Cidade? ");
    scanf("%s", Nome_Cidade2); //leitura do nome da cidade
        
    printf("População? ");
    scanf("%d", &Populacao2); //leitura do numero da população
    
    printf("Área em km²? ");
    scanf("%f", &Area2); //leitura da área (em km²)

    printf("PIB em bilhões de reais? ");
    scanf("%f", &PIB2); //leitura do valor do PIB

    printf("Números de Pontos Turísticos? ");
    scanf("%d", &Ponto_Turistico2); //leitura da quantidade de pontos turístico

    //Calculo da densidade demográfica carta 1
    //utilização do casting para (float)
    DensidadePop2 = (float) Populacao2 / Area2;
    
    //Calculo do Pib per Capita carta 1
    //utilização do casting para (float)
    //conversão do PIB para todas as casas decimais
    PIB2 = PIB2 * 1000000000; 
    PIBperCapita2 = (float) PIB2 / Populacao2;

    printf("\n");

    //No código abaixo será impresso todos os dados que foram armazenados em cada variável da primeira carta.
    
    printf("Carta 1: \n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo_Carta1);
    printf("Nomde da Cidade: %s\n", Nome_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos Turísticos: %d\n", Ponto_Turistico1);
    printf("Densidade Demográfica: %.2f hab/km²\n", DensidadePop1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    printf("\n"); //utilizado para saltar uma linha

    //No código abaixo será impresso todos os dados que foram armazenados em cada variável da segunda carta.    

    printf("Carta 2: \n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_Carta2);
    printf("Nomde da Cidade: %s\n", Nome_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos Turísticos: %d\n", Ponto_Turistico2);
    printf("Densidade Demográfica: %.2f hab/km²\n", DensidadePop2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    return 0;
}