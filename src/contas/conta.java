package contas;

public class conta {

    private int numero;
    private double saldo;
    private cliente cliente;

    public conta(int numero, double saldo, cliente cliente){
        this.numero = numero;
        this.saldo = saldo;
        this.cliente = cliente;
    }
    public double  Saldo(){
        return saldo;
    }
    public void Depositar(double valor){
        saldo += valor;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public double getSaldo() {
        return saldo;
    }
    public cliente getCliente() {
        return cliente;
    }
    public String getNomeCliente(){
        return this.cliente.getNome();
    }

    public String toString(){
        return "numero da conta:" +numero+"\n"+ "Sado da conta:" +saldo+ "\n" +"cliente :" +getNomeCliente();
    }
}
