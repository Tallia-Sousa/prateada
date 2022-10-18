
#include <stdio.h>
#define Max 50
int negativos(int n, float*vet){
  int i,neg= 0;
  for( i = 0; i < n; i++){
   if(vet[i] < 0){
      neg++; //contador de numeros negativos
   }
      
    }
    return neg;
}
   int main(){
  
   float vetor[Max];
   int n;
  printf("quantos elementos vc quer testar? não exceda a quantidade definida: 50[]\n");
  scanf("%d", &n);
printf("digite %d elemento(s)\n", n);
  for(int j= 0; j < n; j++){
   scanf("%f",&vetor[j]);

}
printf("%d negativo(s)",negativos(n, vetor));
  return 0;
  }