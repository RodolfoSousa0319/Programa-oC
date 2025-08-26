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

    printf("\n");

    //Soma dos Super Poderes das cartas 1 e 2
    float SuperPoder1 = (float) Populacao1 + Area1 + PIB1 + PIBperCapita1 + (1/DensidadePop1) + Ponto_Turistico1;
    float SuperPoder2 = (float) Populacao2 + Area2 + PIB2 + PIBperCapita2 + (1/DensidadePop2) + Ponto_Turistico2;

    //Declaração das variáveis resultdos das comparações
    int resultadoPop, resultadoArea, resultadoPIB, resultadoDensidade, resultadoPerCapita, resultadoSuperPoder;

    //Comparação dos dados das duas cartas
    resultadoPop = Populacao1 > Populacao2;
    resultadoArea = Area1 > Area2;
    resultadoPIB = PIB1 > PIB2;
    resultadoDensidade = DensidadePop1 > DensidadePop2;
    resultadoPerCapita = PIBperCapita1 >  PIBperCapita2;
    resultadoSuperPoder = SuperPoder1 > SuperPoder2;

    //Saída de dados das comparações das cartas. Sendo (1) para carta 1 e (0) para carta 2
    printf("#Comparação das cartas#\n");
    printf("Carta 1 vence com resultado (1)\n");
    printf("Carta 2 vence com resultado (0)\n");
    printf("População: (%d)\n", resultadoPop);
    printf("Área: (%d)\n", resultadoArea);
    printf("PIB:: (%d)\n", resultadoPIB);
    printf("Densidade Demográfica: (%d)\n", resultadoDensidade);
    printf("PIB Per Capita: (%d)\n", resultadoPerCapita);
    printf("Super Poder: (%d)\n", resultadoSuperPoder);

    printf("\n");

    return 0;

}