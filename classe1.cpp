    #include <iostream>
    #include "classe1.h"
    using namespace std;
    
    //aqui o processo de inicialização de variáveis (nome e cpf) que o construtor da classe "Cliente" faz, associando a string passada por parâmetro ao atributo privado "nome" da classe.
    Cliente::Cliente(string nome, string cpf) : 
        nome(nome), cpf(cpf){}

    string Cliente::getNome(){
        return nome;
    }
    //o corpo da função mostra que ela retorna a string nome associado à classe "Cliente".
    
    string Cliente::getCpf(){
        return cpf;
    }
    //o corpo da função mostra que ela retorna a string nome associado à classe "Cliente".