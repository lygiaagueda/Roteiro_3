#include <iostream>
#include <string>

#include "pagamento.h"

using namespace std;

void Pagamento::setValorDoPagamento(double valorDoPagamento) {
  this->valorDoPagamento = valorDoPagamento;
}
void Pagamento::setNomeDoFuncionario(double nomeDoFuncionarioo) {
  this->nomeDoFuncionario = nomeDoFuncionario;
}

double Pagamento::getValorDoPagamento() {
  return valorDoPagamento;
}
string Pagamento::getNomeDoFuncionario() {
  return nomeDoFuncionario;
}

Pagamento::Pagamento(double valorDoPagamento, string nomeDoFuncionario) {
  this->valorDoPagamento = valorDoPagamento;
  this->nomeDoFuncionario = nomeDoFuncionario;
}

Pagamento::~Pagamento(){}
