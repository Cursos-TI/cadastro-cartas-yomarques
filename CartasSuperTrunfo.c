#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// Desafio Super Trunfo - Países
//Desenvolvimento do jogo com inclusão de switch casa, if - else e operadores.

int main() {
    //Definição das variáveis para armazenar os dados das cartas 1 e 2.
    char estado1 [80], estado2 [80];
    char cidade1[40], cidade2[40];
    char nomeAtributo1[90], nomeAtributo2[90];

    int Atributo1, Atributo2;
    int pontosturisticos1, pontosturisticos2, EscolhaJogador;
    unsigned long int populacao1, populacao2;

    float area1, area2, PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2, SuperPoder1, SuperPoder2;

    float Valor1A, Valor2A, Valor1B, Valor2B;
    float soma1, soma2;
    
    //Apresentação do jogo e escolha do jogador para iniciar o jogo ou ver as regras.
    printf("Bem vindo ao Super Trunfo!\n\n");
    printf("Escolha uma opção:\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    scanf("%d", &EscolhaJogador);

    //Estrutura Switch com menu interativo simples;
    switch (EscolhaJogador) {
        case 1:
        printf("Iniciando o jogo...\n\n");
            break;
        case 2:
        printf("Regras do Jogo:\n");
        printf("1. Cada jogador deve cadastrar os dados de um estado e sua respectiva cidade.\n");
        printf("2. Os atributos cadastrados serão: nome do estado, nome da cidade, população, pontos turísticos, área e PIB.\n");
        printf("3. O Super Poder de cada carta será calculado com base nos atributos cadastrados.\n");
        printf("4. O jogador escolherá dois atributos para comparar entre as duas cartas, e o vencedor será determinado com base nesse atributo.\n");
        printf("5. O objetivo é ter a carta com o maior Super Poder ou o melhor desempenho no atributo escolhido.\n");
        printf("6. O Super Poder e o PIB per capita são calculados automaticamente!\n\n");
        printf("Boa sorte no jogo!!\n\n");
            break;
        default:
        printf("Opção inválida! Por favor, escolha 1 para iniciar o jogo ou 2 para ver as regras.\n\n");
    }
    //Entradada de dados para a carta 1.
    printf("Digite o nome do Estado 1: \n");
    scanf("%s", estado1);
    printf("Digite o nome da Cidade 1: \n");
    scanf("%s", cidade1);
    printf("Digite a quantidade de população do estado 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a quantidade de pontos turísticos do Estado 1: \n");
    scanf("%d", &pontosturisticos1);
    printf("Digite a área do estado 1 (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB do estado 1: \n");
    scanf("%f", &PIB1);

 //Cálculo para densidade populacional e PIB per capita e exibição do resultado.  
 densidadepopulacional1 = (float) populacao1 / area1;
 printf("Densidade Populacional %s (Quanto menor o valor, maior o poder!): %.2f habitantes por Km²!\n", estado1, densidadepopulacional1);
 PIBpercapita1 = PIB1 / populacao1;
 printf("PIB per capita 1: %f\n\n", PIBpercapita1);

    //Entrada de dados para a carta 2.
    printf("Digite o nome do Estado 2:\n");
    scanf("%s", estado2);
    printf("Digite o nome da Cidade 2:\n");
    scanf("%s", cidade2);
    printf("Digite a quantidade de população do estado 2:\n");
    scanf("%lu", &populacao2);
    printf("Digite a quantidade de pontos turísticos do Estado 2:\n");
    scanf("%d", &pontosturisticos2);
    printf("Digite a área do estado 2 (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB do estado 2:\n");
    scanf("%f", &PIB2);

 //Cálculo para densidade populacional e PIB per capita e exibição do resultado.
 densidadepopulacional2 = (float) populacao2 / area2;
 printf("Densidade Populacional %s (Quanto menor o valor, maior o poder!): %.2f habitantes por Km²!\n", estado2, densidadepopulacional2);
 PIBpercapita2 = PIB2 / populacao2;
 printf("PIB per capita 2: %f\n\n", PIBpercapita2);

 //Impressão dos dados cadastrados, carta 01 e carta 02 e cálculo do Super Poder de cada carta.
 printf("\n>>> DADOS DA CARTA 01 <<<\n");
 printf("Estado 1: %s - Cidade 1: %s\n", estado1, cidade1);
 printf("População 1: %lu Habitantes - Pontos Turísticos 1: %d\n", populacao1, pontosturisticos1);
 printf("Área 1 (km²): %.2f\n", area1);
 printf("PIB 1: %.2f\n", PIB1);

 //Cálculo do Super poder e a regra de densidade populacional;
 SuperPoder1 = pontosturisticos1 + (1 / densidadepopulacional1) + PIB1 + PIBpercapita1 + area1 + populacao1;
 printf("Super Poder do Estado (%s): %.2f\n\n", estado1, SuperPoder1);

 printf("\n>>> DADOS DA CARTA 02 <<<\n");
 printf("Estado 2: %s - Cidade 2: %s\n", estado2, cidade2);
 printf("População 2: %lu Habitantes - Pontos Turísticos 2: %d\n", populacao2, pontosturisticos2);
 printf("Área 2 (km²): %.2f\n", area2);
 printf("PIB 2: %.2f\n", PIB2);

 //Cálculo do Super poder e a regra de densidade populacional;
 SuperPoder2 = pontosturisticos2 + ( 1 / densidadepopulacional2) + PIB2 + PIBpercapita2 + area2 + populacao2;
 printf("Super Poder do Estado (%s): %.2f\n", estado2, SuperPoder2);

 //Comparação das cartas 01 e 02;
 //Menu interativo para que o jogador escolha o atributo desejado.

  printf("\nAgora você deve escolher dois atributos para comparar e determinar o vencedor final!\n\n");
  printf("Escolha o atributo 01:\n");
  printf("1 - Super Poder\n");
  printf("2 - Pontos Turísticos\n");
  printf("3 - Densidade Populacional\n");
  printf("4 - PIB\n");
  printf("5 - PIB per capita\n");
  printf("6 - Área\n");
  printf("7 - População\n");
  scanf("%d", &Atributo1);

  printf("Escolha o atributo 02:\n");
   printf("1 - Super Poder\n");
   printf("2 - Pontos Turísticos\n");
   printf("3 - Densidade Populacional\n");
   printf("4 - PIB\n");
   printf("5 - PIB per capita\n");
   printf("6 - Área\n");
   printf("7 - População\n");
  scanf("%d", &Atributo2);

  //Controle de  escolha para evitar que o usuário escolha o mesmo atributo
  if (Atributo2 == Atributo1) {
    printf ("Você escolheu o mesmo atributo! Por favor, tente novamente!");

    return 0;
  }
  // >>> ATRIBUTO 1 <<<
      switch (Atributo1) {
        case 1: Valor1A = SuperPoder1; Valor2A = SuperPoder2; strcpy(nomeAtributo1, "Super Poder"); 
        break;
        case 2: Valor1A = pontosturisticos1; Valor2A = pontosturisticos2; strcpy(nomeAtributo1, "Pontos Turisticos"); 
        break;
        case 3: Valor1A = densidadepopulacional1; Valor2A = densidadepopulacional2; strcpy(nomeAtributo1, "Densidade");
         break;
        case 4: Valor1A = PIB1; Valor2A = PIB2; strcpy(nomeAtributo1, "PIB");
         break;
        case 5: Valor1A = PIBpercapita1; Valor2A = PIBpercapita2; strcpy(nomeAtributo1, "PIB per capita"); 
         break;
        case 6: Valor1A = area1; Valor2A = area2; strcpy(nomeAtributo1, "Area"); 
         break;
        case 7: Valor1A = populacao1; Valor2A = populacao2; strcpy(nomeAtributo1, "Populacao"); 
         break;
    }
    // >>> ATRIBUTO 2 <<<
        switch (Atributo2) {
        case 1: Valor1B = SuperPoder1; Valor2B = SuperPoder2; strcpy(nomeAtributo2, "Super Poder"); 
         break;
        case 2: Valor1B = pontosturisticos1; Valor2B = pontosturisticos2; strcpy(nomeAtributo2, "Pontos Turisticos");
         break;
        case 3: Valor1B = densidadepopulacional1; Valor2B = densidadepopulacional2; strcpy(nomeAtributo2, "Densidade");
         break;
        case 4: Valor1B = PIB1; Valor2B = PIB2; strcpy(nomeAtributo2, "PIB");
         break;
        case 5: Valor1B = PIBpercapita1; Valor2B = PIBpercapita2; strcpy(nomeAtributo2, "PIB per capita");
         break;
        case 6: Valor1B = area1; Valor2B = area2; strcpy(nomeAtributo2, "Area"); 
         break;
        case 7: Valor1B = populacao1; Valor2B = populacao2; strcpy(nomeAtributo2, "Populacao"); 
         break;
    }

    // >>> AJUSTE DA DENSIDADE <<<
    // Aqui aplicamos a regra: menor densidade = melhor poder!
    if (Atributo1 == 3) {
        Valor1A = 1 / Valor1A;
        Valor2A = 1 / Valor2A;
    }
    if (Atributo2 == 3) {
        Valor1B = 1 / Valor1B;
        Valor2B = 1 / Valor2B;
    }
    // >>> SOMA <<<
    soma1 = Valor1A + Valor1B;
    soma2 = Valor2A + Valor2B;

 // >>> RESULTADO <<<

 printf("\n Resultado Final do Jogo!!\n\n");
 printf("\n %s vs %s\n\n", estado1, estado2);

 printf ("%s:\n%s = %.2f | %s = %.2f\n\n", nomeAtributo1, estado1, Valor1A, estado2, Valor2A);
 printf ("%s:\n%s = %.2f | %s = %.2f\n\n", nomeAtributo2, estado1, Valor1B, estado2, Valor2B);

 printf ("Soma dos atributos %s: %.2f\n", estado1, soma1);
 printf ("Soma dos atributos %s: %.2f\n\n", estado2, soma2);

    if (soma1 > soma2) {
        printf("Parabéns! O Vencedor do jogo é: %s\n", estado1);
    } else if (soma2 > soma1) {
        printf("Parabéns! O Vencedor do jogo é: %s\n", estado2);
    }
    else {
        printf("Empate! Ambos os valores são iguais!\n");
    }
       
    printf ("Bom jogo, até a próxima!");

 return 0;

}

