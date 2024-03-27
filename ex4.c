#include <stdio.h>
int main(){
  int valor;
  int i;
  printf("Digite um valor inteiro:\n");
  scanf("%d", &valor);
  for(i = valor; i > 0; i--){
    if(valor % i == 0){
      printf("%d\n", i); 
    }
    
   }
  }