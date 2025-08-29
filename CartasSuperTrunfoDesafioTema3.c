#include <stdio.h>


// Desafio Super Trunfo - Estados
// Tema 3 - Comparação entre as cartas e menu de opções
// Parte inicial com scanf para ler os dados
// Parte final com printf para imprimir os dados

int main() {
    
    //Todas as variáveis da carta 1, estão com a terminação 1.
    //Todas as variáveis da carta 2, estão com a terminação 2.

    int Populacao1, Populacao2, Ponto_Turistico1, Ponto_Turistico2, opcao;
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
    PIBperCapita1 = (float) (PIB1*1000000000) / Populacao1;
      
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
    PIBperCapita2 = (float) (PIB2*1000000000) / Populacao2;

    printf("\n");
    //Descrição do menu de opções
    printf("### Comparação de atributos das cartas###\n");    
    printf("Menu de Opções abaixo: \n");    
    printf("Opção 1 -> População:\n");
    printf("Opção 2 -> Área:\n");
    printf("Opção 3 -> PIB:\n");
    printf("Opção 4 -> Pontos Turísticos:\n");
    printf("Opção 5 -> PIB per Capita:\n");
    printf("Opção 6 -> Densidade Demográfica:\n");
    printf("Digite a opçao do atributo que deseja comparar: ");
    scanf("%d", &opcao);

    //Utilização do Switch para escolha do menu de opções
    switch (opcao)  {

    case 1:
        printf("Atributo escolhido: População\n");        
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);        
        printf("População carta 1 - %d\n", Populacao1);
        printf("População carta 2 - %d\n", Populacao2);
        break;
    case 2:
        printf("Atributo escolhido: Área\n");
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);       
        printf("Área carta 1 - %.2f\n", Area1);
        printf("Área carta 2 - %.2f\n", Area2);
        break;
    case 3:
        printf("Atributo escolhido: PIB\n");
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);        
        printf("PIB carta 1 - %.2f\n", PIB1);
        printf("PIB carta 2 - %.2f\n", PIB2);
        break;
    case 4:
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);       
        printf("Pontos Turísticos carta 1 - %d\n", Ponto_Turistico1);
        printf("Pontos Turísticos carta 2 - %d\n", Ponto_Turistico2);
        break;
    case 5:
        printf("Atributo escolhido: PIB per Capita\n");
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);      
        printf("PIB per Capita carta 1 - %.2f\n", PIBperCapita1);
        printf("PIB per Capita carta 2 - %.2f\n", PIBperCapita2);
        break;
    case 6:
        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("Cidades escolhidas: %s e %s\n", Nome_Cidade1, Nome_Cidade2);         
        printf("Dendsidade Demográfica carta 1 - %.2f\n", DensidadePop1);
        printf("Densidade Demográfica carta 2 - %.2f\n", DensidadePop2);
        break;    
    default:
        printf("Opção Inválida! Tente novamente!");
    }  
    
    //Estrutura de condição para comparação atributo populaçao entre as cartas    
    if ((opcao == 1) && (Populacao1 > Populacao2)) {
        printf("Carta 1 venceu!\n");
    }
    else if ((opcao == 1) && (Populacao1 == Populacao2)) {
        printf("Empate entre as cartas\n");
    }
    else if ((opcao == 1) && (Populacao1 < Populacao2)) {
        printf("Empate das cartas!\n");
    }



    return 0;

}