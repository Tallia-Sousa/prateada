#include <stdio.h>
#include <stdlib.h>
//lista ja ta saindo com o total de elementos contados
typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

// inserir ordenado
void inserir_ordenado(Lista *lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else if(novo->valor < lista->inicio->valor){
            novo->proximo = lista->inicio;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->proximo && novo->valor > aux->proximo->valor)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void imprimir(Lista lista){
    No *no = lista.inicio;
    printf("\n\tLista tam %d: ", lista.tam);
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}
int ListaVazia(){
     Lista *lista;
  
  if(lista->tam == NULL)
     return 1;
  else
     return 0;
  
}

int main(){

    
    //No *lista = NULL;
    Lista lista;

    criar_lista(&lista);
  
     
  inserir_ordenado(&lista, 1);
  imprimir(lista);
  inserir_ordenado(&lista, 4);
  imprimir(lista);
  inserir_ordenado(&lista, 8);
  imprimir(lista);
  inserir_ordenado(&lista, 6);
  imprimir(lista);
    
if(ListaVazia() == 0)
     printf("Nao ha elementos na lista\n");
  else
    printf("Ha elementos na lista");

  

    return 0;
}