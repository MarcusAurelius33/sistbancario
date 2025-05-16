#include <iostream>
#include <string> 
#include "classe1.h"
#include "classe2.h"

using namespace std;

int main(){
    Cliente cliente1 ("Ana", "111.111.111-11");
    Cliente cliente2 ("Bruno", "222.222.222-22");
    Cliente cliente3 ("Carla", "333.333.333-33");
    //criação de 3 objetos da classe "Cliente", que exige os parâmetros de tipo string "nome" e "cpf".

    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);
    //criação de 3 objetos da classe "ContaBancaria", que exige os parâmetros "numero" de tipo int, "titular", de tipo cliente (referencia a objeto) e "saldo" do tipo double.

    conta1.exibirSaldo();
    //chamada da função "exibirSaldo", relacionada ao objeto da classe ContaBancaria "conta1". (exibirá o saldo da conta1).
    
    conta1.transferir(200.0, conta2);
    //chamada da função "transferir", relacionada ao objeto da classe ContaBancaria "conta1". (irá transferir o valor "200" para a conta2).
   
    conta1.transferir(300.0, conta2, conta3);
    //chamada da função "transferir", relacionada ao objeto da classe ContaBancaria "conta1". (irá dividir o valor 300 por 2 e transferi-lo para conta2 e conta3).
    cout << endl;
    
    conta1.exibirInformacoes();
    //chamada da função "exibirInformacoes", relacioanda ao objeto da classe ContaBancaria "conta1". (exibe o titular, cpf, número e saldo da conta1).
    
    conta2.exibirInformacoes();
    //chamada da função "exibirInformacoes", relacioanda ao objeto da classe ContaBancaria "conta2". (exibe o titular, cpf, número e saldo da conta2).

    conta3.exibirInformacoes();
    //chamada da função "exibirInformacoes", relacioanda ao objeto da classe ContaBancaria "conta3". (exibe o titular, cpf, número e saldo da conta3).

    return 0;
}