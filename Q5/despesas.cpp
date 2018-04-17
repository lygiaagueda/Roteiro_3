#include <iostream>
#include <string>

#include "despesas.h"

using namespace std;

Despesa::Despesa(){
    this->valor = 0;
    this->tipoDeGasto = " ";
}

Despesa::Despesa(double valor, string tipoDeGasto){
    this->valor = valor;
    this->tipoDeGasto = tipoDeGasto;
}

void Despesa::setValor(double valor){
    this->valor = valor;
}

void Despesa::setTipoDeGasto(string tipoDeGasto){
    this->tipoDeGasto = tipoDeGasto;
}

double Despesa::getValor(){
    return this->valor;
}

string Despesa::getTipoDeGasto(){
    return this->tipoDeGasto;
}

Despesa::~Despesa(){}