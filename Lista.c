#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define MAX 4
//nao consegui rodar
//logo deve ta errado

 struct lista {
    int quant;
    int vet[MAX];
};


Lista *criar() {
    Lista *l;
    l = (Lista *) malloc(sizeof(Lista));
    if (l != NULL) {
        l->quant = 0;
    }

    return l;

}

void clear(Lista *l) {
    free(l);
}

void append(Lista *l, int valor) {
    l->vet[l->quant] = valor;
    l->quant++;
}

void insert(Lista *l, int valor) {
    
    for (int i = l->quant - 1; i >= 0; i--) {
        l->vet[i + 1] = l->vet[i];
    }
    l->vet[0] = valor;
    l->quant++;

}

int get(Lista *l, int index) {
    return l->vet[index];
}

//nao cosegui rodar a lista, entao vai separado

int empty(Lista *l){
if (l == NULL)
return -1;
else 
return (l -> quant== 0);

}
int size (Lista *l){
if (l == NULL)
return -1;
else 
return l -> quant;

}
void print(Lista *l){
printf("Elementos: %d\n",l->vet[l->quant]);

}
int full (Lista *l){
if (l == NULL)
return -1;
else 
return (l->quant== MAX);

}

void removerPorIndice(Lista *l, int index) {
for(int v1 = l->quant -1; v1 >= 0; v1--){
if(l->vet[index] == l->vet[v1]){
for(int v2 = v1; v2 >= 0; v2--){
l->vet[v1] = l->vet[v1+1];
            } 
        }
       }
     l->quant--;
    }
void inserirOrdenado(Lista *l, int valor){
    for(int v = l->quant -1; v >= 0; v--){
    l->vet[v+1] = l->vet[v];
    }
    l->vet[0] = valor;
    l->quant++;
    int var;
    for(int v2 = 0; v2 < l->quant; v2++){
    for(int v1 = 0; v1 < l->quant-1; v1++){
    if (l->vet[v1] > l->vet[v1+1]){
        var = l->vet[v1];
        l->vet[v1] = l->vet[v1+1];
        l->vet[v1+1] = var;
            }} }
    }
