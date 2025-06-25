#include <stdio.h>

int main() {
  //Informações da carta 1
  char estado_1;
  char cod_carta_1[4]; //Em C, as strings sempre terminam com um caractere especial chamado '\0' (nulo), que marca o fim da string, por isso foi usado [4]
  char nome_cidade_1[30];
  int populacao_1;
  float area_1;
  float pib_1;
  int pts_turisticos_1;

  //Informações da carta 2
  char estado_2;
  char cod_carta_2[4];
  char nome_cidade_2[30];
  int populacao_2;
  float area_2;
  float pib_2;
  int pts_turisticos_2;

  //Entrada de dados carta 1
  printf("***** Cadastro da carta 1 *****\n");
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_1);

  printf("Código (ex: A01): ");
  scanf("%s", cod_carta_1);

  printf("Nome da cidade (ex: SaoPaulo): ");
  scanf("%s", nome_cidade_1);

  printf("População (Não insira ponto e nem vírgula): ");
  scanf("%d", &populacao_1);

  printf("Área em km²: ");
  scanf("%f", &area_1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_1);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pts_turisticos_1);

  //Entrada de dados carta 2
  printf("***** Cadastro da carta 2 *****\n");
  printf("Estado (um letra de 'A' a 'H'): ");
  scanf(" %c", &estado_2);

  printf("Código (ex: A01): ");
  scanf("%s", cod_carta_2);

  printf("Nome da cidade (ex: SaoPaulo): ");
  scanf("%s", nome_cidade_2);

  printf("População (Não insira ponto e nem vírgula): ");
  scanf("%d", &populacao_2);

  printf("Área em km²: ");
  scanf("%f", &area_2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib_2);

  printf("Número de pontos turísticos: ");
  scanf("%d", &pts_turisticos_2);
  printf("\n");

  //Saída de dados carta 1
  printf("===== CARTA 1 =====\n");
  printf("Estado: %c\n", estado_1);
  printf("Código: %s\n", cod_carta_1);
  printf("Nome da cidade: %s\n", nome_cidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área: %.2f km²\n", area_1);
  printf("PIB: %.2f bilhões de reais\n", pib_1);
  printf("Número de pontos turísticos: %d\n", pts_turisticos_1);

  //Saída de dados carta 2
  printf("===== CARTA 2 =====\n");
  printf("Estado: %c\n", estado_2);
  printf("Código: %s\n", cod_carta_2);
  printf("Nome da cidade: %s\n", nome_cidade_2);
  printf("População: %d\n", populacao_2);
  printf("Área: %.2f km²\n", area_2);
  printf("PIB: %.2f bilhões de reais\n", pib_2);
  printf("Número de pontos turísticos: %d\n", pts_turisticos_2);

  return 0;
}
