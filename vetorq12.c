#include <stdio.h>
int numerospares(int n, int *vet){
    int numeros = 0;
    int i = 0;
    while (i < n){
        i++;
        if((vet[i] % 2) == 0){
            numeros = numeros + 1;
        }
    
    }
    return numeros;
}

int main(){
    int V[4];//vetor//
    int j = 0;

    printf("Digite os numeros de acordo com o tamanho do vetor: \n");
    while (j < 4){
      j++;
        scanf("%d",&V[j]);
    }
    
    for(int i = 0; i < 4; i++){
        printf("%d ", V[i]);
    }
    printf("\n  Há %d  numero(s) par(es)", numerospares(4, V));

    return 0;
}


