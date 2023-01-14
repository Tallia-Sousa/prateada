package Salao.Beleza;

import java.util.Objects;

public class RegistroServico {

    private Servico servico;
    private Funcionario funcionario;
    private Cliente cliente;


    public RegistroServico(Cliente cliente) {
        this.cliente = cliente;

    }

    public RegistroServico() {

    }

    public Cliente getCliente() {
        return cliente;
    }

    public Servico getServico() {
        return servico;
    }

    public Funcionario getFuncionario() {
        return funcionario;



    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof RegistroServico)) return false;
        RegistroServico that = (RegistroServico) o;
        return Objects.equals(getServico(), that.getServico()) && Objects.equals(getFuncionario(), that.getFuncionario()) && Objects.equals(getCliente(), that.getCliente());
    }

    @Override
    public int hashCode() {
        return Objects.hash(getServico(), getFuncionario(), getCliente());
    }

    @Override
    public String toString() {
        return "RegistroServico{" +
                "servico=" + servico.getNome() +
                ", funcionario=" + funcionario.getNome();
    }
}

