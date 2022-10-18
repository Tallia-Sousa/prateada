#include <stdio.h>
#define Max 50
int invertevetor(int n, int *vet){
int invert;
int i;
 for(i = 0; i < n / 2 ; i++){
    
    invert = vet[i];
    vet[i] =vet[n-i-1];
    vet[n-i-1] = invert;
 }
 for(i = 0; i < n; i++){
     
     printf("%d",vet[i]);
 }
 printf("\n");

}
int main()
{
    int v[Max];
    int n;
    int i;

printf("entre com a quantidade de elementos que vc deseja testar, nao exceda o limite de[50]\n");
    scanf("%d", &n);
    printf("digite os %d elementos\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    printf("%d",invertevetor(n, v));
      


    return 0;
}

