#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int dado;
int palpite;
srand(time(NULL));
dado = 1 + rand()%100;


  
  for(int i = 0; i < 5; i++){

    printf("Digite um valor entre 1 e 100:\n");
    scanf("%d", &palpite);
    while (palpite <1 || palpite >100){
          printf("Valor inválido. Digite um valor entre 1 e 100:\n");
          scanf("%d", &palpite);


    }
    if(palpite>dado){
      printf("Você chutou muito alto!\n");
    }
    else if (palpite<dado){
      printf("Você chutou muito baixo!\n");
    }


  
  else if(palpite == dado){
    printf("Você acertou.");
  }

  
  

  

  

}
  printf("Você excedeu as tentativas. O número era %d", dado);

}