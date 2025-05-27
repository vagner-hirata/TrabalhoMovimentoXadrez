#include <stdio.h>

void main( ) {
  int rainha = 0;
  int bispo = 0;
  // Move a torre 5 casas pra direita.
  for(int torre = 0; torre < 5; torre++ ) {
    printf("Direta\n"); // Imprime o movimento da torre.
  }

  // Move a rainha 8 casas pra esquerda.
  do {
    printf("Esquerda\n"); // Imprime o movimento da rainha.
    rainha++;
  } while(rainha < 8);

  // Move o Bispo 5 casas na diagonal para cima a direita
  while(bispo < 5) {
    printf("Cima, Direita\n");
    bispo++;
  }
}