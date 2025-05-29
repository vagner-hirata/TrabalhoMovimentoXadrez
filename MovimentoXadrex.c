#include <stdio.h>


// Faz a movimentação da torre.
void moverTorre(int casas) {
  if(casas > 0) {
    printf("Direta\n"); // Imprime o movimento da torre.
    moverTorre(casas - 1); // Condição para o loop acabar.
  }
};

// Faz a movimentação da rainha.
void moverRainha(int casas) {
  if(casas > 0) {
    printf("Esquerda\n"); // Imprime o movimento da rainha.
    moverRainha(casas - 1); // Condição para o loop acabar.
  }
}

// Faz a movimentação do bispo.
void moverBispo(int casas) { // casas = 5 
  if(casas > 0) {
    for(int i = 0; i < casas; i++) { 
      
      printf("Cima\n"); // movimento do Bispo para cima
      
      for(int j = 10; j > i; j--) {
        
        printf("Direita\n"); // Movimento do bispo para direita.

        // Mantem a movimentação da direita em apenas 1 casa.
        if(j > casas){
          break;
        }
      } 
    }
  }
}
// casas = 5, i = 0 , j = 1 


int main( ) {
  // Move a torre 5 casas pra direita.
  moverTorre(5);

  // Move a rainha 8 casas pra esquerda.
  moverRainha(8);

  // Move o Bispo 5 casas na diagonal para cima a direita
  moverBispo(5);


  for(int i = 0; i < 5; i++) {
      if(i > 1) continue;
      printf("Cima\n"); // Imprime o movimento do cavalo para cima.
    for(int j = 0; j < 5 && i > 0; j++) {
      
      if(j > 0) break;
      printf("Direita\n");// Imprime o movimento do cavalo para direita.
    }
    
  }
  
  return 0;
}