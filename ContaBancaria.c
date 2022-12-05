#include <stdio.h>

typedef struct{
    int numero;
    double saldo;
}Conta;

void iniciarConta( Conta *conta, int numero, double saldo){

conta->numero = numero;
conta->saldo = saldo;

}
void depositarNaConta(Conta *conta, double valor){
    conta->saldo = conta->saldo + valor;
    printf("Deposito no valor de %.0fR$\n",valor);

}
void sacarDaConta( Conta *conta, double valor){
    conta->saldo = conta->saldo - valor;
    printf("Saque no valor de %.0f R$\n",valor);
}
void imprimirConta(Conta conta){
printf("Numero da conta: %d\n",conta.numero );
printf("Saldo da conta: %.1f\n", conta.saldo);

}
int main(){
       Conta conta;
    

    iniciarConta(&conta,1,200.0);
    imprimirConta(conta);
    depositarNaConta(&conta,200);
    imprimirConta(conta);
    sacarDaConta(&conta,100);
    imprimirConta(conta);


    

    return 0;
}