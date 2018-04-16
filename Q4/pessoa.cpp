#include <iostream>
#include <string>

#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome){
    this->nome = nome;
}

Pessoa::Pessoa(string nome, int idade, string telefone){
    this->nome = nome;
    this->idade = idade;
    this->telefone = telefone;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

string Pessoa::getTelefone(){
    return this->telefone;
}

Pessoa::~Pessoa(){
}
