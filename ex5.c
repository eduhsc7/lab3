#include <stdio.h>
int main(){
  int valor;
  int i;
  int soma = 0;
  printf("Digite um valor inteiro:\n");
  scanf("%d", &valor);
  for(i = 1; i < valor; i++){
    if(valor % i == 0){
    soma = soma + i; 
    }

   }
  if (valor == soma*2){
    printf("O número %d é perfeito", valor);
  }
  else{
    printf("O número %d não é perfeito", valor);
  }
}
  
  