#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   // Área para definição das variáveis para armazenar as propriedades das cidades
      
   // Área para entrada de dados
   
   // Área para exibição dos dados da cidade

    //Declarar variáveis. 
      char Estado = 'x';
      char CodigoDaCarta[4] = "XXX";
      char NomeDaCidade[50] = "XXX";
      int Populacao = 0;
      float Area = 0.0;
      float PIB = 0.0;
      int NumeroDePontosTuristicos = 0;
 
    
    //Cadastrar a primeira carta.
    printf("Estado (Informe uma letra de 'A' a 'H'): \n");
    scanf("%c", &Estado);

    printf("Código da carta (Letra do Estado mais um número de 0 a 4, ex.: A01): \n");
    scanf("%s", &CodigoDaCarta);
    
    printf("Nome da Cidade: \n");
    scanf("%s", &NomeDaCidade);

    printf("População: \n");
    scanf("%d", &Populacao);

    printf("Área (km²): \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de ponto turísticos: \n");
    scanf("%i", &NumeroDePontosTuristicos);

    //Exibir a primeira carta.
    printf("------------------------------------------ \n");
    printf("Carta - 01: \n");
    printf("========================================== \n");
    printf("Estado.....................: %c \n", Estado);
    printf("Código da Carta............: %s \n", CodigoDaCarta);
    printf("Nome da Cidade.............: %s \n", NomeDaCidade);
    printf("População..................: %i \n",Populacao);
    printf("Área (km²).................: %2.f \n", Area);
    printf("PIB........................: %2.f \n", PIB);
    printf("Número de Pontos Turísticos: %i \n", NumeroDePontosTuristicos);
    printf("========================================== \n");
 

    //Cadastrar a segunda carta.
    printf("Estado (Informe uma letra de 'A' a 'H': ) \n");
    scanf(" %c", &Estado);

    printf("Código da carta (Letra do Estado mais um número de 0 a 4, ex.: A01): \n");
    scanf(" %s", &CodigoDaCarta);
    
    printf("Nome da Cidade: \n");
    scanf(" %s", &NomeDaCidade);

    printf("População: \n");
    scanf(" %d", &Populacao);

    printf("Área (km²): \n");
    scanf(" %f", &Area);

    printf("PIB: \n");
    scanf(" %f", &PIB);

    printf("Número de ponto turísticos: \n");
    scanf(" %i", &NumeroDePontosTuristicos);

    //Exibir a segunda carta.
    printf("------------------------------------------ \n");
    printf("Carta - 02: \n");
    printf("========================================== \n");
    printf("Estado:....................: %c \n", Estado);
    printf("Código da Carta............: %s \n", CodigoDaCarta);
    printf("Nome da Cidade.............: %s \n", NomeDaCidade);
    printf("População..................: %i \n",Populacao);
    printf("Área (km²).................: %2.f \n", Area);
    printf("PIB........................: %2.f \n", PIB);
    printf("Número de Pontos Turísticos: %i \n", NumeroDePontosTuristicos);
    printf("========================================== \n");


return 0;
} 
