#include <iostream>
#include <string>
#include <vector>
#include "controle-de-gastos.h"
#include "despesas.h"

using namespace std;

ControleDeGastos::~ControleDeGastos(){}

ControleDeGastos::ControleDeGastos(){}

void ControleDeGastos::setDespesa(vector <Despesa> despesas){
    this->despesas = despesas;
}

double ControleDeGastos::calculaTotalDeDespesas(){
    int i = 0;
    double valortotal = 0;

    for(i = 0; i <= this->despesas.size(); i++){
        valortotal += this->despesas[i].getValor();
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
        }else if(i == despesas.size()){
            break;
        }
        
        i++;    
    }
    return existe;
}