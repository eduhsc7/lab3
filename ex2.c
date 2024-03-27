#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

int dado;
int palpite;
int tentativas = 1;
srand(time(NULL));
  dado = 1 + rand()%100;
  printf("Digite seu palpite:\n");
  scanf("%d", &palpite);
  while (palpite <1 || palpite > 100){
    printf("Digite um valor entre 1 e 100:\n");

    scanf("%d", &palpite);

  }
  while(palpite != dado){
  
  if(palpite<dado){
    printf("Você chutou muito baixo.");
    scanf("%d", &palpite);

  }
  else if(palpite > dado){
    printf("Você chutou muito alto.");
    scanf("%d", &palpite);

  }
  tentativas++;
}
  printf("Você conseguiu com um total de %d tentativas.", tentativas);











}