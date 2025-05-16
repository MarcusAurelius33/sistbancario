#ifndef CLASSE1_h
#define CLASSE1_h
#include <string>
using namespace std;

class Cliente{  //declaração da classe "Cliente"
    private:       
    string nome;       
    //declaração do atributo privado relacionado ao nome do cliente.
    string cpf;
    //declaração do atributo privado relacionado ao cpf do cliente

    public: 
    Cliente(string nome, string cpf);
    //declaração do construtor da classe "Cliente", que tem como parâmetros a string nome e a string cpf.
    
    string getNome();
    //declaração da função "getNome", que retorna o nome do cliente relacionado a um objeto específico.
    
    string getCpf();
    //declaração da função "getCpf", que retorna o cpf do cliente relacionado a um objeto específico
    
};
#endif