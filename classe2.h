#ifndef CLASSE2_h
#define CLASSE2_h
#include <string>
#include "classe1.h"
using namespace std;

class ContaBancaria{    //declaração da classe "ContaBancaria".
    private:
    int numero;
    //declaração do atributo privado do tipo int relacionado ao número da conta bancária.
    double saldo;
    //declaração do atributo privado do tipo double relacionado ao saldo da conta bancária
    Cliente titular;
    //declaração do atributo privado do tipo Cliente relacionado ao titular da conta bancária. 

    public:
    ContaBancaria(int numero, const Cliente& titular, double saldo=0);
    //declaração do construtor da classe "ContaBancaria". Vale citar que aqui o parâmetro "saldo" do tipo double é definido com valor padrao igual a zero, diferente do que acontece no arquivo de implementação "classe2.cpp".
        
    int getNumero();
    //declaração da função "getNumero".

    double getSaldo();
    //declaração da função "getSaldo".

    void depositar (double valor);
    //declaração da função "depositar".

    void sacar(double valor);
    //declaração da função "sacar".
    
    void exibirSaldo();
    //declaração da função "exibirSaldo".

    void exibirInformacoes();
    //declaração da função "exibirInformações".

    void transferir(double valor, ContaBancaria& destino1);
    //declaração da função "transferir".

    void transferir(double valor, ContaBancaria& destino1, ContaBancaria& destino2);
    //sobrecarga da função "transferir".
};
#endif