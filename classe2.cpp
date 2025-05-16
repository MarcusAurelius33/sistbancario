    #include <iostream>
    #include "classe2.h"
    #include "classe1.h"
    using namespace std;
    
    //no arquivo de implementação da classe2 pode-se entender o funcionamento das funções associadas ao escopo de "ContaBancaria".
    
    ContaBancaria::ContaBancaria(int numero, const Cliente& titular, double saldo) :
        numero(numero), titular(titular), saldo(saldo){}
    //aqui o processo de inicialização de variáveis que o construtor da classe "ContaBancaria" faz, associando "numero" do tipo int ao número da conta bancária, "titular", que é uma referência constante a um objeto da classe "Cliente" e que está associado ao titular da conta bancária. E por fim o "saldo" de tipo double que está associado ao saldo da classe "ContaBancaria".

    int ContaBancaria::getNumero(){
        return numero;
    }
    //função "getNumero", que retorna o inteiro "numero".

    double ContaBancaria::getSaldo(){
        return saldo;
    }
    //função "getSaldo", que retorna o double "saldo".

    void ContaBancaria::depositar (double valor){
        saldo += valor;
    }
    //função "depositar", que tem o double "valor" como parâmetro e adiciona o double "valor" ao double "saldo".

    void ContaBancaria::sacar(double valor){
        if (saldo >= valor){
            saldo -= valor;
        }else{
            cout << "Saldo insuficiente!" << endl;
        }
    }
    //função "sacar", que tem o double "valor" como parâmetro e possui 1 condição: caso "saldo" seja maior ou igual a "valor" ocorre a operação de retirada de "valor" do "saldo", o que mostra a diminuição do saldo da conta bancária.
    //caso a condição não seja atendida, exibe na tela a mensagem "Saldo insuficiente".
    
    void ContaBancaria::exibirSaldo(){
        cout << "Saldo atual da conta " << numero << ": R$ " << getSaldo() << endl;
    }
    //função "exibirSaldo", que exibe na tela o saldo atual da conta bancária.

    void ContaBancaria::exibirInformacoes(){
        cout << "Titular: " << titular.getNome() << ", " << "CPF: " << titular.getCpf() << endl;
        cout << "Número da conta: " << getNumero() << ", " << "Saldo: R$ " << getSaldo() << endl;
    }
    //função "exibirInformacoes", que exibe na tela o nome do titular, cpf, número da conta e saldo da conta bancária.

    void ContaBancaria::transferir(double valor, ContaBancaria& destino1){
        if (saldo < valor){
            cout << "Saldo insuficiente!" << endl;
        }else{
            saldo -= valor;
            destino1.saldo += valor;
            cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino1.numero << endl;
        }
    }
    //método "transferir", que tem como parâmetros o double "valor" e o "destino1", que é uma referência a um objeto da classe "ContaBancaria".
    //a função possui uma condição: caso o "saldo" na conta seja menor que o "valor" passado, a mensagem "Saldo insuficiente" será exibido na tela.
    //caso a condição não seja atendida, a quantidade relacionada a "valor" será diminuida do saldo da conta bancária, e uma mensagem que informa o valor e as contas envolvidas na operação será mostrada na tela.
    
    void ContaBancaria::transferir(double valor, ContaBancaria& destino1, ContaBancaria& destino2){
        if (saldo < valor){
            cout << "Saldo insuficiente!" << endl;
        }else{
            saldo -= valor;
            destino1.saldo += (valor/2);
            destino2.saldo += (valor/2);
            cout << "Transferido: R$ " << valor << " para cada conta (" << destino1.numero << " e " << destino2.numero << ")" << " da conta " << numero << endl;
        }
    }
    //a sobrecarga do método "transferir" possui agora mais um parâmetro "destino2" passado por referência e está relacionado à terceira conta envolvida na operação.
    //o corpo da função mostra que o método agora divide o valor informado para 2 contas destino.