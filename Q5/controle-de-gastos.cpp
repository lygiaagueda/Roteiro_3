#include <iostream>
#include <string>
#include <vector>
#include "controle-de-gastos.h"
#include "despesas.h"

using namespace std;

ControleDeGastos::~ControleDeGastos(){}

ControleDeGastos::ControleDeGastos(){
}

void ControleDeGastos::setDespesa(vector <Despesa> despesas){
    this->despesas = despesas;
}

double ControleDeGastos::calculaTotalDeDespesas(){
    int i = 0;
    double valortotal = 0;

    while(1){
        if(this->despesas[i].getValor() > 0){
            // cout << i <<" "<< this->despesas[i].getValor() << endl;
            valortotal += this->despesas[i].getValor();
            i++;
        }else{
            break;
        }
    }
    return valortotal;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo){
    int i = 0;
    bool existe = false;
    while(1){
        if(tipo.compare(this->despesas[i].getTipoDeGasto()) == 0){
            existe = true;
            break;
        }else{
            // cout << i << " " + this->despesas[i].getTipoDeGasto() << endl;
             i++;
        }    
    }
    return existe;
}