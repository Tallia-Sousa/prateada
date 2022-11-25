
#include <stdio.h>

typedef struct{
    int numero;
    double saldo;
}Conta;

void iniciaConta( Conta *conta, int numero, double saldo){

conta->numero = numero;
conta->saldo = saldo;

}
void deposito(Conta *conta, double valor){
    conta->saldo = conta->saldo + valor;
    printf("Deposito no valor de %.0fR$\n",valor);

}
void saque( Conta *conta, double valor){
    conta->saldo = conta->saldo - valor;
    printf("Saque no valor de %.0f R$\n",valor);
}
void imprimeConta(Conta conta){
printf("Numero da conta: %d\n",conta.numero );
printf("Saldo da conta: %.0f\n", conta.saldo);

}
int main(){
       Conta conta;
    

    iniciaConta(&conta,1,200);
    imprimeConta(conta);
    deposito(&conta,200);
    imprimeConta(conta);
    saque(&conta,100);
    imprimeConta(conta);


    

    return 0;
}