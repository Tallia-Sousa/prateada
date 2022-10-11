#include <stdio.h>

int invertendo(int n, int *vet){
    int seqv[4];
    for(int j = 4,i = 0; i <= 4; i++,j--){
        seqv[i] = vet[j];
      
    printf("%d ", seqv[i]);
    }
    return invertendo;
}

int main(){
  int V[4];
  
  printf("insira os num de acordo com a quantidade do vetor:\n");
    
  for(int j = 0; j < 4; j++){
    scanf("%d", &V[j]);
  }
//vetor
  for(int i = 0; i < 4; i++){
    printf("%d", V[i]);
  }
  
  printf("invertendo numeros");
  return invertendo(4, V );
  

  return 0;
}