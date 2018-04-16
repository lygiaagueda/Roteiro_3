#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    private:
        string nome, telefone;
        int idade;

    public:
        Pessoa(string nome);
        Pessoa(string nome, int idade, string telefone);

        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);

        string getNome();
        int getIdade();
        string getTelefone();

	virtual ~Pessoa();
};

#endif
