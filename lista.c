#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


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