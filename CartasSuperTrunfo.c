#include <stdio.h>

int main() {
   
    //Declarar variáveis e iniciar as variáveis. 
      char Estado = 'x';
      char CodigoDaCarta[4] = "XXX";
      char NomeDaCidade[50] = "XXX";
      int Populacao = 0;
      float Area = 0.0;
      float PIB = 0.0;
      int NumeroDePontosTuristicos = 0;
      unsigned long int DensidadePopulacional = 0.0;
      float PIB_PerCapta = 0.0;


      char Estado_2 = 'x';
      char CodigoDaCarta_2[4] = "XXXX";
      char NomeDaCidade_2[50] = "XXX";
      int Populacao_2 = 0;
      float Area_2 = 0.0;
      float PIB_2 = 0.0;
      int NumeroDePontosTuristicos_2 = 0;
      unsigned long int DensidadePopulacional_2 = 0.0;
      float PIB_PerCapta_2 = 0.0;
   
      //Declarar variveis de comparacação de super poder da carta 1
      int Populacao_SP = 0;
      int Area_SP = 0.0;
      int PIB_SP = 0.0;
      int NumeroDePontosTuristicos_SP = 0;
      int DensidadePopulacional_SP = 0;
      int PIB_PerCapta_SP = 0;
      int SuperPoder_Carta_1 = 0;
         
       //Declarar variveis de comparacação de super poder da carta 2
      int Populacao_SP_2 = 0;
      int Area_SP_2 = 0.0;
      int PIB_SP_2 = 0.0;
      int NumeroDePontosTuristicos_SP_2 = 0;
      int DensidadePopulacional_SP_2 = 0;
      int PIB_PerCapta_SP_2 = 0;
      int SuperPoder_Carta_2 = 0;
            
      //Variável para dar um pause assim que terminar o cadastro
      char Continuar;


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
    scanf(" %s", CodigoDaCarta);//Receber o código da Carta.
    
    printf("Nome da Cidade: \n");//Solicitar o nome da cidade.
    scanf(" %s", NomeDaCidade);//Receber o onome da cidade.

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

    //Cadastrar a carta 2
    //Criar o cabeçalho para orientar o usuário.
    printf("   ||| C A D A S T R O  D E  C A R T A S ||| \n");
    printf("------------------------------------------------- \n");
    printf("Carta - 02 \n");
    printf("------------------------------------------------- \n");
   
    printf("Estado (Informe uma letra de 'A' a 'H'): \n"); //Solicitar a letra do Estado.
    scanf(" %c", &Estado_2); //Receber a letra do Estado.

    printf("Código da carta (Letra do Estado mais um número de 0 a 4, ex.: A01): \n");//Solicitar o código da carta.
    scanf(" %s", CodigoDaCarta_2);//Receber o código da Carta.
    
    printf("Nome da Cidade: \n");//Solicitar o nome da cidade.
    scanf(" %s", NomeDaCidade_2);//Receber o onome da cidade.

    printf("População (total de habitantes): \n");//Socilitar o número de habitantes.
    scanf(" %d", &Populacao_2);//Receber o número de habitantes.

    printf("Área (km²): \n");//Solicitar a dimensão da área.
    scanf(" %f", &Area_2);//Receber a dimensão da área.

    printf("PIB: \n");//Solicitar o PIB.
    scanf(" %f", &PIB_2);//Receber o PIB.

    printf("Número de ponto turísticos: \n");//Solicitar o número de pontos turísticos.
    scanf(" %i", &NumeroDePontosTuristicos_2);//Receber o número de pontos turísticos.

    //Calcular a densidade populacional (Número de Habitantes divido pelo km²).
    DensidadePopulacional_2 = (float) Populacao_2 / Area_2; 

    //Calcular o PIB per capta (PIB dividido pelo número de habitantes).
    PIB_PerCapta_2 = (float) PIB_2 / Populacao_2;


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
    printf("Densidade Populacional (hab./km²): %lu \n", DensidadePopulacional);
    printf("PIB per capta (PIB/habitante)....: R$ %.2f \n", PIB_PerCapta);
    printf("================================================= \n");
    //Fim do processamento da primeira carta.
 //-----------------------------------------------------------------------------

    printf(" \n");//Pular uma linha.

    //Exibir a primeira carta.
    //Criar um rótulo para o cabeçalho da carta
    printf("------------------------------------------------- \n");
    printf("/// Carta - 02 ////////////////////////////////// \n");
    printf("================================================= \n");
    //Exibir os dados coletados.
    printf("Estado...........................: %c \n", Estado_2);
    printf("Código da Carta..................: %s \n", CodigoDaCarta_2);
    printf("Nome da Cidade...................: %s \n", NomeDaCidade_2);
    printf("População(Total de habitantes)...: %i \n",Populacao_2);
    printf("Área (km²).......................: %.2f \n", Area_2);
    printf("PIB..............................: %.2f \n", PIB_2);
    printf("Número de Pontos Turísticos......: %i \n", NumeroDePontosTuristicos_2);
    printf("Densidade Populacional (hab./km²): %lu \n", DensidadePopulacional_2);
    printf("PIB per capta (PIB/habitante)....: R$ %.2f \n", PIB_PerCapta_2);
    printf("================================================= \n");

    //Pausa para ver o preechimento
    printf("Cartas cadastradas com sucesso! \n") ;
    printf("Insira qualquer caracter, depois precione Enter para continuar \n") ;
    scanf(" %c", &Continuar);


    //Fazendo as comparações para ver qual carta vence
    printf("Será comparado os números da \n ");
    printf("com da Carta - 1 com a Carta - 2. \n" );
    printf("Se o resultado retornar 1, a Carta - 1 vence. \n");
    printf("Se retornar 0, a Carta - 2 vence \n");

    //Fazer as comparações

    //Comparar população
    Populacao_SP = Populacao > Populacao_2;
    Populacao_SP_2 = Populacao < Populacao_2;

    //comparar área
    Area_SP = Area > Area_2;
    Area_SP_2 = Area < Area_2;

   PIB_SP = PIB > PIB_2;
   PIB_SP_2 = PIB < PIB_2;

    //Comparar pontos turísticos
    NumeroDePontosTuristicos_SP = NumeroDePontosTuristicos > NumeroDePontosTuristicos_2;
    NumeroDePontosTuristicos_SP_2 = NumeroDePontosTuristicos_SP < NumeroDePontosTuristicos_SP_2;

    //Agora é o contratorio, quem term menor densidade populacional, pontua
    DensidadePopulacional_SP = DensidadePopulacional < DensidadePopulacional_2;
    DensidadePopulacional_SP_2 = DensidadePopulacional > DensidadePopulacional_2;

    //comparar PIB percapta
    PIB_PerCapta_SP = PIB > PIB_2;
    PIB_PerCapta_SP_2 = PIB < PIB_2;

   //Calcualr os super poderes
   SuperPoder_Carta_1 = Populacao_SP + Area_SP + PIB_SP + NumeroDePontosTuristicos_SP + DensidadePopulacional_SP + PIB_PerCapta_SP;
   SuperPoder_Carta_2 = Populacao_SP_2 + Area_SP_2 + PIB_SP_2 + NumeroDePontosTuristicos_SP_2 + DensidadePopulacional_SP_2 + PIB_PerCapta_SP_2;
   
   //Pontuação da carta 1
    //Criar um rótulo para o cabeçalho da carta
    printf("------------------------------------- \n");
    printf("/// Carta - 01 ////////////////////// \n");
    printf("===================================== \n");
    printf("População........................: %i \n",Populacao_SP);
    printf("Área (km²).......................: %i \n", Area_SP);
    printf("PIB..............................: %i \n", PIB_SP);
    printf("Número de Pontos Turísticos......: %i \n", NumeroDePontosTuristicos_SP);
    printf("Densidade Populacional (hab./km²): %i \n", DensidadePopulacional_SP);
    printf("PIB per capta (PIB/habitante)....: %i \n", PIB_PerCapta_SP);
    printf("Super poder (Soma dos pontos)....: %i \n", SuperPoder_Carta_1);
    printf("===================================== \n");
    //Fim do processamento da primeira carta.
 //-----------------------------------------------------------------------------
   
   //Pontuação da carta 2
    //Criar um rótulo para o cabeçalho da carta
    printf("------------------------------------- \n");
    printf("/// Carta - 02 ////////////////////// \n");
    printf("===================================== \n");
    printf("População........................: %i \n",Populacao_SP_2);
    printf("Área (km²).......................: %i \n", Area_SP_2);
    printf("PIB..............................: %i \n", PIB_SP_2);
    printf("Número de Pontos Turísticos......: %i \n", NumeroDePontosTuristicos_SP_2);
    printf("Densidade Populacional (hab./km²): %i \n", DensidadePopulacional_SP_2);
    printf("PIB per capta (PIB/habitante)....: %i \n", PIB_PerCapta_SP_2);
    printf("Super poder (Soma dos pontos)....: %i \n", SuperPoder_Carta_2);
    printf("===================================== \n");
    //Fim do processamento da primeira carta.



return 0;
}
