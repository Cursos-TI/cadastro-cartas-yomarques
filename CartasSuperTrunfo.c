#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
//Desenvolvimento do jogo com inclusão de switch case e if-else. 16/04/2026

int main() {
    //Definição das variáveis para armazenar os dados das cartas 1 e 2.
    char estado1 [80], estado2 [80];
    char cidade1[40], cidade2[40];

    int pontosturisticos1, pontosturisticos2, EscolhaJogador;
    unsigned long int populacao1, populacao2;

    float area1, area2, PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1 = PIB1 / populacao1, PIBpercapita2 = PIB2 / populacao2;
    float SuperPoder1, SuperPoder2;

    //Apresentação do jogo e escolha do jogador para iniciar o jogo ou ver as regras.
    printf("Bem vindo ao Super Trunfo!\n\n");
    printf("Escolha uma opção:\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    scanf("%d", &EscolhaJogador);

    switch (EscolhaJogador) {
        case 1:
            printf("Iniciando o jogo...\n\n");
            break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. Cada jogador deve cadastrar os dados de um estado e sua respectiva cidade.\n");
            printf("2. Os atributos cadastrados serão: nome do estado, nome da cidade, população, pontos turísticos, área e PIB.\n");
            printf("3. O Super Poder de cada carta será calculado com base nos atributos cadastrados.\n");
            printf("4. O jogador escolherá um atributo para comparar entre as duas cartas, e o vencedor será determinado com base nesse atributo.\n");
            printf("5. O objetivo é ter a carta com o maior Super Poder ou o melhor desempenho no atributo escolhido.\n\n");
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

 printf("Densidade Populacional %s (Quanto menor o valor, maior o poder!): %f habitantes por quilômetro quadrado!\n\n", 
                                     estado1, densidadepopulacional1 = populacao1 / area1);
 printf("PIB per capita 1: %f\n\n", PIBpercapita1 = PIB1 / populacao1);

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

 printf("Densidade Populacional %s (Quanto menor o valor, maior o poder!): %f habitantes por quilômetro quadrado!\n\n", 
                                     estado2, densidadepopulacional2 = populacao2 / area2);
 printf("PIB per capita 2: %f\n\n", PIBpercapita2 = PIB2 / populacao2);

//Impressão dos dados cadastrados, carta 01 e carta 02 e cálculo do Super Poder de cada carta.
 printf("Estado 1: %s - Cidade 1: %s\n", estado1, cidade1);
 printf("População 1: %lu Habitantes - Pontos Turísticos 1: %d\n", populacao1, pontosturisticos1);
 printf("Área 1 (km²): %.2f\n", area1);
 printf("PIB 1: %.2f\n", PIB1);

 SuperPoder1 = pontosturisticos1 + densidadepopulacional1 + PIB1 + PIBpercapita1 + (area1 / populacao1);
 printf("Super Poder do Estado 1 (%s): %.2f\n", estado1, SuperPoder1);

 printf("Estado 2: %s - Cidade 2: %s\n", estado2, cidade2);
 printf("População 2: %lu Habitantes - Pontos Turísticos 2: %d\n", populacao2, pontosturisticos2);
 printf("Área 2 (km²): %.2f\n", area2);
 printf("PIB 2: %.2f\n", PIB2);

 SuperPoder2 = pontosturisticos2 + densidadepopulacional2 + PIB2 + PIBpercapita2 + (area2 / populacao2);
 printf("Super Poder do Estado 2 (%s): %.2f\n", estado2, SuperPoder2);

//Comparação para determinar o vencedor.
printf("\n!!Comparação dos Super Poderes e Atributos!!\n");
printf("Lembre-se, Valor 1 = Verdadeiro, Valor 0 = Falso\n\n");

printf("O Super Poder do Estado 1 (%s) é maior que o do Estado (%s)? %d\n\n", estado1, estado2, SuperPoder1 > SuperPoder2);
printf("O estado (%s) tem mais pontos turísticos que o estado (%s)? %d\n\n", estado1, estado2,
                                                          pontosturisticos1 > pontosturisticos2);

printf("O estado (%s) tem uma densidade populacional menor que o estado (%s)? %d\n\n", estado1, estado2,
                                                          densidadepopulacional1 < densidadepopulacional2);  

printf("O estado (%s) tem um PIB maior que o estado (%s)? %d\n\n", estado1, estado2, PIB1 > PIB2);
printf("O estado (%s) tem um PIB per capita maior que o estado (%s)? %d\n\n", estado1, estado2, PIBpercapita1 > PIBpercapita2);
printf("O estado (%s) tem uma área maior que o estado (%s)? %d\n\n", estado1, estado2, area1 > area2);
printf("O estado (%s) tem um número maior de habitantes que o estado (%s)? %d\n\n", estado1, estado2, populacao1 > populacao2);

printf("Escolha um atributo para fazer a comparação final:\n");
printf("1 - Super Poder\n");
printf("2 - Pontos Turísticos\n");
printf("3 - Densidade Populacional\n");
printf("4 - PIB\n");
printf("5 - PIB per capita\n");
printf("6 - Área\n");
printf("7 - População\n");
scanf("%d", &EscolhaJogador);

switch (EscolhaJogador) {
    case 1:
        printf("Você escolheu comparar o Super Poder!\n");
        if (SuperPoder1 > SuperPoder2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("Super Poder do estado (%s): %.2f\n", estado1, SuperPoder1);
            printf("Super Poder do estado (%s): %.2f\n", estado2, SuperPoder2);
        } else if (SuperPoder1 < SuperPoder2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("Super Poder do estado (%s): %.2f\n", estado1, SuperPoder1);
            printf("Super Poder do estado (%s): %.2f\n", estado2, SuperPoder2);
        } else {
            printf("Empate! Ambos os estados têm o mesmo Super Poder.\n");
        }
        break;
    case 2:
        printf("Você escolheu comparar os Pontos Turísticos!\n");
        if (pontosturisticos1 > pontosturisticos2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("Pontos Turísticos do estado (%s): %d\n", estado1, pontosturisticos1);
            printf("Pontos Turísticos do estado (%s): %d\n", estado2, pontosturisticos2);
        } else if (pontosturisticos1 < pontosturisticos2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("Pontos Turísticos do estado (%s): %d\n", estado1, pontosturisticos1);
            printf("Pontos Turísticos do estado (%s): %d\n", estado2, pontosturisticos2);
        } else {
            printf("Empate! Ambos os estados têm a mesma quantidade de pontos turísticos.\n");
        }
        break;
    case 3:
        printf("Você escolheu comparar a Densidade Populacional!\n");
        printf("Lembre-se, quanto menor a densidade populacional, maior o poder!\n");
        if (densidadepopulacional1 < densidadepopulacional2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("Densidade Populacional do estado (%s): %.2f habitantes por km²\n", estado1, densidadepopulacional1);
            printf("Densidade Populacional do estado (%s): %.2f habitantes por km²\n", estado2, densidadepopulacional2);
        } else if (densidadepopulacional1 > densidadepopulacional2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("Densidade Populacional do estado (%s): %.2f habitantes por km²\n", estado1, densidadepopulacional1);
            printf("Densidade Populacional do estado (%s): %.2f habitantes por km²\n", estado2, densidadepopulacional2);
        } else {
            printf("Empate! Ambos os estados têm a mesma densidade populacional.\n");
        }
        break;
    case 4:
        printf("Você escolheu comparar o PIB!\n");
        if (PIB1 > PIB2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("PIB do estado (%s): %.2f\n", estado1, PIB1);
            printf("PIB do estado (%s): %.2f\n", estado2, PIB2);
        } else if (PIB1 < PIB2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("PIB do estado (%s): %.2f\n", estado1, PIB1);
            printf("PIB do estado (%s): %.2f\n", estado2, PIB2);
        } else {
            printf("Empate! Ambos os estados têm o mesmo PIB.\n");
        }
        break;
    case 5:
        printf("Você escolheu comparar o PIB per capita!\n");
        if (PIBpercapita1 > PIBpercapita2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("PIB per capita do estado (%s): %.2f\n", estado1, PIBpercapita1);
            printf("PIB per capita do estado (%s): %.2f\n", estado2, PIBpercapita2);
        } else if (PIBpercapita1 < PIBpercapita2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("PIB per capita do estado (%s): %.2f\n", estado1, PIBpercapita1);
            printf("PIB per capita do estado (%s): %.2f\n", estado2, PIBpercapita2);
        } else {
            printf("Empate! Ambos os estados têm o mesmo PIB per capita.\n");
        }
        break;
    case 6:
        printf("Você escolheu comparar a Área!\n");
        if (area1 > area2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("Área do estado (%s): %.2f km²\n", estado1, area1);
            printf("Área do estado (%s): %.2f km²\n", estado2, area2);
        } else if (area1 < area2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("Área do estado (%s): %.2f km²\n", estado1, area1);
            printf("Área do estado  (%s): %.2f km²\n", estado2, area2);
        } else {
            printf("Empate! Ambos os estados têm a mesma área.\n");
        }
        break;
    case 7:
        printf("Você escolheu comparar a População!\n");
        if (populacao1 > populacao2) {
            printf("O estado (%s) é o vencedor!\n", estado1);
            printf("População do estado (%s): %lu habitantes\n", estado1, populacao1);
            printf("População do estado (%s): %lu habitantes\n", estado2, populacao2);
        } else if (populacao1 < populacao2) {
            printf("O estado (%s) é o vencedor!\n", estado2);
            printf("População do estado (%s): %lu habitantes\n", estado1, populacao1);
            printf("População do estado (%s): %lu habitantes\n", estado2, populacao2);
        } else {
            printf("Empate! Ambos os estados têm a mesma população.\n");
        }
        break;
    default:
        printf("Opção Inválida! Por favor, escolha um número entre 1 e 7.\n");
}

return 0;

}
