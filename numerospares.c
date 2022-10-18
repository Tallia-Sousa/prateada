#include <stdio.h>
# define Max 50
int numerospares(int n, int *vet){
int np = 0;
for(int i = 0; i < n; i++ ){

  if(vet[i] % 2 == 0){
     np++;//contador de numeros pares
  }

}
return np;
}

int main()
{
    int v[Max];
    int n;
    
    
    printf("quantos elementos vc deseja testar ? , não exceda o numero maximo definido[50]!\n ");
    scanf("%d", &n);
    printf("entra com %d elemento(s)\n", n);
    for(int i = 0; i < n; i++ ){
    printf("digite os numeros\n");
    scanf("%d", &v[i]);
    }
    printf("Há %d numero(s) pare(s)\n",numerospares(n, v));

    return 0;
}
