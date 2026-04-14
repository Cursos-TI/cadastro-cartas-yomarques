#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados
// e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int População, PontosTuristicos;
  float PIB, Área;
  char Estado[50], Cidade [50];

  // Área para entrada de dados

  printf ("Digite o nome do estado: \n");
  scanf ("%s", &Estado);

  printf ("Digite o nome da Cidade: \n");
  scanf ("%s", &Cidade);

  printf ("Digite a área da cidade em Km²: \n ");
  scanf ("%f", &Área);

  printf ("Digite o PIB da cidade: \n");
  scanf ("%f", &PIB);

  printf ("Digite a quantidade da população: \n");
  scanf ("%d", &População);

  printf ("Digite a quantidade de pontos turísticos: \n");
  scanf ("%d", &PontosTuristicos);

  // Área para exibição dos dados da cidade
  printf ("Estado: %s - Cidade: %s \n", Estado, Cidade);
  printf ("Área em Km²: %f - PIB: %f", Área, PIB);
  printf ("População: %d - Pontos Turísticos: %d", População, PontosTuristicos);

  return 0;

} 
