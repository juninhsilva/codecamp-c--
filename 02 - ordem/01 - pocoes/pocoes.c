/*
    Desafio

    Na Fortaleza dos CodeMiners, há uma área especializada em alquimia, onde os aprendizes criam poções mágicas (extraídas dos óleos essenciais dos cogumelos da Grande Montanha) para aprimorar suas habilidades. As poções são armazenadas em frascos numerados e os aprendizes precisam organizá-las em ordem crescente de acordo com a numeração. Sua missão é criar um algoritmo em C que implemente o Bubble Sort¹ para ordenar os frascos de poção. Este algoritmo ajudará os aprendizes a manterem a área de alquimia organizada e eficiente.

    ¹ É um dos algoritmos de ordenação mais simples e é fácil de entender. Ele compara pares de elementos adjacentes e troca-os se estiverem fora de ordem, repetindo esse processo até que toda a lista esteja ordenada. Apesar de não ser eficiente, é um bom ponto de partida para o estudo de algoritmos de ordenação. Saiba mais aqui.
    Entrada

        1ª Linha: Número inteiro N (1 <= N <= 1000), representando a quantidade de frascos de poção.
        2ª Linha: Lista com N números inteiros NÃO ORDENADOS e separados por espaços, representando a numeração de cada frasco de poção.

    Saída

    Imprima a lista de frascos de poção em ORDEM CRESCENTE, com cada número separado por um espaço.
    Exemplos

    A tabela abaixo apresenta exemplos com alguns dados de entrada e suas respectivas saídas esperadas. Certifique-se de testar seu programa com esses exemplos e com outros casos possíveis.
    Entrada 	Saída
    5
    5 3 4 1 2 	1 2 3 4 5
    7
    10 20 30 40 50 60 7 	7 10 20 30 40 50 60
    9
    1000 1 10 100 0 4 4000 400 40 	0 1 4 10 40 100 400 1000 4000
*/

#include<stdio.h>
#include<stdlib.h>

void trocar(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void bubbleSort(int array[], int quantidade){ 
  // TODO: Implemente o algoritmo "Bubble Sort".
  // Dica: O método "trocar" pode ser útil ;)

  for(int i = 1; i < quantidade; i++){
    for(int j = 0; j < quantidade - i; j++){
        if(array[j]>array[j+1]){
            trocar(&array[j], &array[j+1]);
        }
    }
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int frascos[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &frascos[i]);
  }
  
  // Executa o algoritmo "bubbleSort" para ordenar os "frascos".
  bubbleSort(frascos, quantidade);
  
  // Imprime os "frascos" ordenados.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", frascos[i]);
  }
  
  return 0;
}