#include <iostream>
#include <string>

#include "pessoa.h"

using namespace std;

int main(){
    Pessoa *eu = new Pessoa("felipe");
    Pessoa *tu = new Pessoa("lygia", 21, "40028922");

    eu->setIdade(20);
    eu->setTelefone("986720709");
    cout << eu->getNome() << ", " << eu->getIdade();
    cout << " anos, telefone: " << eu->getTelefone() << endl;

    cout << tu->getNome() << ", " << tu->getIdade();
    cout << " anos, telefone: " << tu->getTelefone() << endl;

    return 0;
}