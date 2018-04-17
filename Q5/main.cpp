#include <iostream>
#include <string>
#include <vector>

#include "controle-de-gastos.h" 
#include "despesas.h"

using namespace std;

int main(){
    vector<Despesa> gastos(4);
    ControleDeGastos *contabilidade =  new ControleDeGastos();

    gastos[0].setTipoDeGasto("aluguel");
    gastos[0].setValor(600);

    gastos[1].setTipoDeGasto("combustivel");
    gastos[1].setValor(150);

    gastos[2].setTipoDeGasto("combustivel");
    gastos[2].setValor(150);

    gastos[3].setTipoDeGasto("comida");
    gastos[3].setValor(800);

    contabilidade->setDespesa(gastos);

    if(contabilidade->existeDespesaDoTipo("aluguel")){
        cout << "existe gasto com aluguel" << endl;
    }
    if(contabilidade->existeDespesaDoTipo("comida")){
        cout << "existe gasto com comida" << endl;
    }
    if(contabilidade->existeDespesaDoTipo("combustivel")){
        cout << "existe gasto com combustivel" << endl;
    }

    cout << "o total de gastos foi de R$" << contabilidade->calculaTotalDeDespesas() <<endl;

    return 0;
}