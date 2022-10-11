#include <stdio.h>
int numerospares(int n, int *vet){
    int nPares = 0;
    for(int j = 0; j < n; j++){
        if((vet[j] % 2) == 0){
            nPares = nPares + 1;
        }
    }
    return nPares;
}

int main(){
    int V[4];//vetor//
    printf("Digite os numeros \n");
    for(int a = 0; a < 4; a++){
      scanf("%d", &V[a]);
    }
    
    for(int i = 0; i < 4; i++){
        printf("%d ", V[i]);

    }
    printf("\n %d total de num  pares.", numerospares(4, V));

    return 0;
}

