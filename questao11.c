#include <stdio.h>
int negativos(int n, float*vet){
  int numero = 0;
  int i = 0;
  while(i < n){
    i++;
    if(vet[i]<0){
      numero++;
    }
  }
  return numero;
}
int main(){
  int j;
  float vetor[3];
  printf("Digite os numeros \n");
  for(j = 0; j < 3; j++){
    scanf("%f",&vetor[j]);
  }
    while(j > 3){
    j++;
    printf("%2.f\n", vetor[j]);
    }
  printf("\n %d  número(s) negativo (s) ", negativos(3, vetor));
  return 0;
}
