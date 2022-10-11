#include <stdio.h>

int numerosnegativos(int n, float *vet){
  int num = 0;
  for(int j = 0; j < n; j++){
    if(vet[j] < 0){
      num += 1;
    }
  }
  return num;
}

int main() {
  
  float V[8];
  int j;
  printf("insira os numeros do V:\n");
  for( j = 0; j < 9; j++){
      scanf("%f", &V[j]);
  }

  for(j = 0; j < 6; j++){
      printf("%2.f ", V[j]);
  }
  printf("\n %d numero(s)  negativo(s) .", numerosnegativos(8, V));
  
 return 0; 
}

