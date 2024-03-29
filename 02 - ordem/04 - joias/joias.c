/*
    Descrição

    Na Fortaleza dos CodeMiners, há uma câmara secreta onde são guardadas joias preciosas utilizadas em rituais e cerimônias. As joias são numeradas com base em seu valor, e os guardiões desejam organizá-las em ordem crescente para facilitar a localização das joias necessárias para cada ocasião. Sua missão é criar um algoritmo em C que implemente o Quick Sort¹ para ordenar as joias. Com esse algoritmo, os guardiões poderão manter as joias organizadas de maneira eficiente e garantir que os rituais e cerimônias ocorram sem problemas.

    ¹ É um algoritmo de ordenação eficiente que utiliza a técnica de divisão e conquista. O Quick Sort seleciona um elemento chamado pivô e particiona a lista de forma que todos os elementos menores que o pivô fiquem à esquerda e os maiores à direita. O processo é repetido recursivamente nas sublistas geradas. A introdução do Quick Sort nesta etapa ajuda a entender o conceito de recursão e a importância da escolha do pivô. Saiba mais aqui.
    Entrada

        1ª Linha: Número inteiro N (1 <= N <= 100), representando a quantidade de joias.
        2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando o valor de cada joia.

    Saída

    Imprima a lista de joias em ORDEM CRESCENTE, com cada número separado por um espaço.
    Exemplos

    A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.
    Entrada 	Saída
    5
    5 3 4 1 2 	1 2 3 4 5
    7
    10 20 30 40 50 60 7 	7 10 20 30 40 50 60
    9
    1000 1 10 100 0 4 4000 400 40 	0 1 4 10 40 100 400 1000 4000
    6
    33 44 55 88 11 22 	11 22 33 44 55 88
*/

#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int array[], int inicio, int fim){ 
  // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
  // Dica: O método "trocar" pode ser útil ;)

  if (inicio < fim) {
    int pivo = array[(inicio + fim) / 2];
    int i = inicio;
    int j = fim;
    while (i <= j) {
      while (array[i] < pivo) i++;
      while (array[j] > pivo) j--;
      if (i <= j) {
        trocar(&array[i], &array[j]);
        i++;
        j--;
      }
    }
    quickSort(array, inicio, j);
    quickSort(array, i, fim);
  }

}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, inicio, fim);
  
  // Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}