#include <stdio.h>
#include <stdlib.h>
/*
Lista Duplamente Encadeada
*/

typedef struct no{
    int valor;
    struct no *p;//proximo
    struct no *a;//anterior
}No;
void inserirNaLista(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->p = NULL;

        
        if(*lista == NULL){
            *lista = novo;
            novo->a = NULL;
        }
        else{
            aux = *lista;
            while(aux->p)
                aux = aux->p;
            aux->p = novo;
            novo->a = aux;
        }
    }
    else
        printf("Erro aõ tentar alocar memoria!\n");
}

No* removerDaLista(No **lista, int num){
    No *aux, *remover = NULL;

    if(*lista){
        if((*lista)->valor == num){
            remover = *lista;
            *lista = remover->p;
            if(*lista)
                (*lista)->a = NULL;
        }
        else{
            aux = *lista;
            while(aux->p && aux->p->valor != num)
                aux = aux->p;
            if(aux->p){
                remover = aux->p;
                aux->p = remover->p;
                if(aux->p)
                    aux->p->a = aux;
            }
        }
    }
    return remover;
}


void imprimirLista(No *no){
    printf("\n\tElementos Da Lista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->p;
    }
    printf("\n\n");
}


int main(void){

    int op, valor;
    No *removido, *lista = NULL;

    do{
  printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n");
        scanf("%d", &op);

        switch(op){
        case 1:
            printf("Digite um valor para ser inserido: ");
            scanf("%d", &valor);
            inserirNaLista(&lista, valor);
            printf("valor inserido com sucesso!");
             break;
        
        case 2:
            printf("Digite um valor para ser removido: ");
            scanf("%d", &valor);
            removido = removerDaLista(&lista, valor);
            if(removido){
                printf("valor a ser removido: %d\n", removido->valor);
                free(removido);
            }
            else
                printf("valor inexistente!\n");
            break;
        case 3:
            imprimirLista(lista);
            break;
        
        default:
            if(op != 0)
                printf("Opcao invalida!\n");
            break;
        }

    }while(op != 0);

    return 0;
}





