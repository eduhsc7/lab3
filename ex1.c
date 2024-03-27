#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int dado;
int palpite;
srand(time(NULL));
  dado = 1 + rand()%100;
  printf("Digite seu palpite:\n");
  scanf("%d", &palpite);
  while (palpite <1 || palpite > 100){
    printf("Digite um valor entre 1 e 100:\n");

    scanf("%d", &palpite);

  }
  if(palpite == dado){
    printf("Você acertou!");
  }
  else if(palpite<dado){
    printf("Você chutou muito baixo. O valor correto é %d", dado);
  }
  else if(palpite > dado){
    printf("Você chutou muito alto. O valor correto é %d", dado);
  }
    
    
  
    
  
    
  



  
}