#include <stdio.h>

int main() {
   
    //Declarar variáveis e iniciar as variáveis. 
      char Estado = 'x';
      char CodigoDaCarta[4] = "XXXX";
      char NomeDaCidade[50] = "XXX";
      int Populacao = 0;
      float Area = 0.0;
      float PIB = 0.0;
      int NumeroDePontosTuristicos = 0;
      float DensidadePopulacional = 0.0;
      float PIB_PerCapta = 0.0;

   //Criar uma rótulo para o programa.   
   printf("================================================= \n");   
   printf("*** P R O G R A M A  S U P E R - T R U N F O *** \n")  ;
   printf("================================================= \n");
   printf("   ||| C A D A S T R O  D E  C A R T A S ||| \n");
   printf("------------------------------------------------- \n");
   printf("CARTA - 01 \n");
   printf("------------------------------------------------- \n");
       
    //Cadastrar a primeira carta.
    printf("Estado (Informe uma letra de 'A' a 'H'): \n"); //Solicitar a letra do Estado.
    scanf(" %c", &Estado); //Receber a letra do Estado.

    printf("Código da carta (Letra do Estado mais um número de 0 a 4, ex.: A01): \n");//Solicitar o código da carta.
    scanf(" %s", &CodigoDaCarta);//Receber o código da Carta.
    
    printf("Nome da Cidade: \n");//Solicitar o nome da cidade.
    scanf(" %s", &NomeDaCidade);//Receber o onome da cidade.

    printf("População (total de habitantes): \n");//Socilitar o número de habitantes.
    scanf(" %d", &Populacao);//Receber o número de habitantes.

    printf("Área (km²): \n");//Solicitar a dimensão da área.
    scanf(" %f", &Area);//Receber a dimensão da área.

    printf("PIB: \n");//Solicitar o PIB.
    scanf(" %f", &PIB);//Receber o PIB.

    printf("Número de ponto turísticos: \n");//Solicitar o número de pontos turísticos.
    scanf(" %i", &NumeroDePontosTuristicos);//Receber o número de pontos turísticos.

    //Calcular a densidade populacional (Número de Habitantes divido pelo km²).
    DensidadePopulacional = (float) Populacao / Area; 

    //Calcular o PIB per capta (PIB dividido pelo número de habitantes).
    PIB_PerCapta = (float) PIB / Populacao;

    //Exibir a primeira carta.
    //Criar um rótulo para o cabeçalho da carta
    printf("------------------------------------------------- \n");
    printf("/// Carta - 01 ////////////////////////////////// \n");
    printf("================================================= \n");
    //Exibir os dados coletados.
    printf("Estado...........................: %c \n", Estado);
    printf("Código da Carta..................: %s \n", CodigoDaCarta);
    printf("Nome da Cidade...................: %s \n", NomeDaCidade);
    printf("População toal de habitantes.....: %i \n",Populacao);
    printf("Área (km²).......................: %.3f \n", Area);
    printf("PIB..............................: %.2f \n", PIB);
    printf("Número de Pontos Turísticos......: %i \n", NumeroDePontosTuristicos);
    printf("Densidade Populacional (hab./km²): %.2f \n", DensidadePopulacional);
    printf("PIB per capta (PIB/habitante)....: R$ %.2f \n", PIB_PerCapta);
    printf("================================================= \n");
    //Fim do processamento da primeira carta.
 //-----------------------------------------------------------------------------

    //Iniciar o cadastro da segunda carta.

    printf(" \n");//Pular uma linha.

    //Criar o cabeçalho para orientar o usuário.
    printf("   ||| C A D A S T R O  D E  C A R T A S ||| \n");
    printf("------------------------------------------------- \n");
    printf("Carta - 02 \n");
    printf("------------------------------------------------- \n");
   
    printf("Estado (Informe uma letra de 'A' a 'H'): \n"); //Solicitar a letra do Estado.
    scanf(" %c", &Estado); //Receber a letra do Estado.

    printf("Código da carta (Letra do Estado mais um número de 0 a 4, ex.: A01): \n");//Solicitar o código da carta.
    scanf(" %s", &CodigoDaCarta);//Receber o código da Carta.
    
    printf("Nome da Cidade: \n");//Solicitar o nome da cidade.
    scanf(" %s", &NomeDaCidade);//Receber o onome da cidade.

    printf("População (total de habitantes): \n");//Socilitar o número de habitantes.
    scanf(" %d", &Populacao);//Receber o número de habitantes.

    printf("Área (km²): \n");//Solicitar a dimensão da área.
    scanf(" %f", &Area);//Receber a dimensão da área.

    printf("PIB: \n");//Solicitar o PIB.
    scanf(" %f", &PIB);//Receber o PIB.

    printf("Número de ponto turísticos: \n");//Solicitar o número de pontos turísticos.
    scanf(" %i", &NumeroDePontosTuristicos);//Receber o número de pontos turísticos.

    //Calcular a densidade populacional (Número de Habitantes divido pelo km²).
    DensidadePopulacional = (float) Populacao / Area; 

    //Calcular o PIB per capta (PIB dividido pelo número de habitantes).
    PIB_PerCapta = (float) PIB / Populacao;

    //Exibir a primeira carta.
    //Criar um rótulo para o cabeçalho da carta
    printf("------------------------------------------------- \n");
    printf("/// Carta - 02 ////////////////////////////////// \n");
    printf("================================================= \n");
    //Exibir os dados coletados.
    printf("Estado...........................: %c \n", Estado);
    printf("Código da Carta..................: %s \n", CodigoDaCarta);
    printf("Nome da Cidade...................: %s \n", NomeDaCidade);
    printf("População(Total de habitantes)...: %i \n",Populacao);
    printf("Área (km²).......................: %.2f \n", Area);
    printf("PIB..............................: %.2f \n", PIB);
    printf("Número de Pontos Turísticos......: %i \n", NumeroDePontosTuristicos);
    printf("Densidade Populacional (hab./km²): %.2f \n", DensidadePopulacional);
    printf("PIB per capta (PIB/habitante)....: R$ %.2f \n", PIB_PerCapta);
    printf("================================================= \n");


return 0;
}
