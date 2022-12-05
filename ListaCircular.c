#include <stdio.h>
#include <stdlib.h>
            //Lista Circular

typedef struct no{
    int valor;
    struct no *p;//prox
}No;

typedef struct{
    No *inicio;
    No *fim;
    int tam;
}Lista;

void criarLista(Lista *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
}

void inserirNaLista(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;

        
        if(lista->inicio == NULL){
            lista->inicio = novo;
            lista->fim = novo;
            lista->fim->p = lista->inicio;
        }
        else{
            lista->fim->p = novo;
            lista->fim = novo;
            
            novo->p = lista->inicio;
        }
        lista->tam++;
    }
    else
        printf("Erro ao tentar alocar memoria!\n");
}
//removendo um nó
No* removerDaLista(Lista *lista, int num){
    No *aux, *remover = NULL;

    if(lista->inicio){
        if(lista->inicio == lista->fim && lista->inicio->valor == num){
            remover = lista->inicio;
            lista->inicio = NULL;
            lista->fim = NULL;
            lista->tam--;
        }
        else if(lista->inicio->valor == num){
            remover = lista->inicio;
            lista->inicio = remover->p;
            lista->fim->p = lista->inicio;
            lista->tam--;
        }
        else{
            aux = lista->inicio;
            while(aux->p != lista->inicio && aux->p->valor != num)
                aux = aux->p;
            if(aux->p->valor == num){
                if(lista->fim == aux->p){
                    remover = aux->p;
                    aux->p = remover->p;
                    lista->fim = aux;
                }
                else{
                    remover = aux->p;
                    aux->p = remover->p;
                }
                lista->tam--;
            }
        }
    }

    return remover;
}

// imprimindo lista circular
void imprimindoLista(Lista lista){
    No *no = lista.inicio;
    printf("\n\tElementos Da Lista : ", lista.tam);
    if(no){
        do{
            printf("%d ", no->valor);
            no = no->p;
        }while(no != lista.inicio);
    }
    printf("\n\n");
}

int main(){

    int opcao, valor;
    Lista lista;
    No *removido;

    criarLista(&lista);

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - Remover\n\t3 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        
        case 1:
            printf("Digite um valor para ser inserido: ");
            scanf("%d", &valor);
            inserirNaLista(&lista, valor);
            printf("valor inserido com sucesso");
            break;
        
        case 2:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            removido = removerDaLista(&lista, valor);
            if(removido){
                printf("Valor removido: %d\n", removido->valor);
                free(removido);
            }
            else
                printf("valor inexistente!\n");
            break;
        case 3:
            imprimindoLista(lista);
            break;
        
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}