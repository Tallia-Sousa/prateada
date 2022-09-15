package contas;

public class testconta {
    public static void main(String[] args) {
         cliente Cliente = new cliente("jose");


         conta contapoupanca = new conta(51,234, Cliente);

         contapoupanca.Depositar(2345);

         System.out.println(contapoupanca);

    }
}
