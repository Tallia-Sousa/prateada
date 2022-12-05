//nao cosegui rodar a lista, entao vai separado
// nao consegui fazer as duas ultimas funçoes
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
printf("Elementos: %d",l->vet[l->quant]);

}
int full (Lista *l){
if (l == NULL)
return -1;
else 
return (l -> quant== MAX);

}
