/*
    Descrição

    Com as máquinas trabalhando e as picaretas cansadas, os CodeMiners precisam colher cogumelos para aumentar o seu estoque. Após desvendar os nomes das divindades no desafio anterior, os CodeMiners foram abençoados e a colheita de cogumelos tornou-se mais abundante. Com isso, eles agora conseguem colher 1 cogumelo a cada 3 minutos. Crie um programa em C que preveja quantos cogumelos serão colhidos em um determinado período de tempo.
    Entrada

    Um número inteiro representando a quantidade de minutos disponíveis para a colheita.
    Saída

    Um número inteiro representando a quantidade de cogumelos colhidos.
    Exemplos

    A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.
    Entrada 	Saída
    9 	3
    33 	11
    12 	4
*/

#include <stdio.h>

int main() {
  int minutos, cogumelosColhidos;

  // Lê a quantidade de minutos disponíveis para colheita
  scanf("%d", &minutos);
  cogumelosColhidos = minutos/3;

  // TODO: Calcule e imprima a quantidade de cogumelos colhidos.
  printf("%d", cogumelosColhidos);

  return 0;
}