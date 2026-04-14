#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
int main() {

    //Definição das variáveis para armazenar os dados das cartas 1 e 2.
    char estado1 [4], estado2 [4];
    char cidade1[20], cidade2[20];

    int pontosturisticos1, pontosturisticos2;
    unsigned long int populacao1, populacao2;

    float area1, area2, PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1 = PIB1 / populacao1, PIBpercapita2 = PIB2 / populacao2;

    float SuperPoder1;
    float SuperPoder2;

    //Entrada de dados para a carta 1.
    printf("Bem vindo ao Super Trunfo!\n");

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
printf("\n!!Comparação dos Super Poderes!!\n");
printf("Lembre-se, Valor 1 = Verdadeiro, Valor 0 = Falso\n\n");

printf("O Super Poder do Estado 1 (%s) é maior que o do Estado 2 (%s)? %d\n\n", estado1, estado2, SuperPoder1 > SuperPoder2);
printf("O estado 1 (%s) tem mais pontos turísticos que o estado 2 (%s)? %d\n\n", estado1, estado2,
                                                          pontosturisticos1 > pontosturisticos2);

printf("O estado 1 (%s) tem uma densidade populacional menor que o estado 2 (%s)? %d\n\n", estado1, estado2,
                                                          densidadepopulacional1 < densidadepopulacional2);  

printf("O estado 1 (%s) tem um PIB maior que o estado 2 (%s)? %d\n\n", estado1, estado2, PIB1 > PIB2);
printf("O estado 1 (%s) tem um PIB per capita maior que o estado 2 (%s)? %d\n\n", estado1, estado2, PIBpercapita1 > PIBpercapita2);
printf("O estado 1 (%s) tem uma área maior que o estado 2 (%s)? %d\n\n", estado1, estado2, area1 > area2);
printf("O estado 1 (%s) tem um número maior de habitantes que o estado 2 (%s)? %d\n\n", estado1, estado2, populacao1 > populacao2);

if (populacao1 > populacao2) {
    printf("O estado 1 (%s) é o vencedor!\n", estado1);
} else {
    printf("O estado 1 (%s) é o perdedor!\n", estado1);
}

return 0;

}
