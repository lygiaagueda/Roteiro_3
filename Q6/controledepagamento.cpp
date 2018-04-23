#include <iostream>
#include <string>

#include "controledepagamento.h"
#include "pagamento.h"

using namespace std;

void ControleDePagamento::setPagamentos(Pagamento pagamentos, int funcionario){
  this->pagamentos[funcionario] = &pagamentos;
}

Pagamento ControleDePagamento::getPagamentos(int funcionario) {
  return *pagamentos[funcionario];
}

double ControleDePagamento::calculaTotalDePagamentos(){
  Pagamento pagamento1 = getPagamentos(0);
  Pagamento pagamento2 = getPagamentos(1);

  return pagamento1.getValorDoPagamento() + pagamento2.getValorDoPagamento();
}

string ControleDePagamento::existePagamentoParaFuncionario( string nomeDoFuncionario) {
  Pagamento pagamento1 = getPagamentos(0);
  Pagamento pagamento2 = getPagamentos(1);

  return (pagamento1.getNomeDoFuncionario() == nomeDoFuncionario ||
          pagamento2.getNomeDoFuncionario() == nomeDoFuncionario)
          ? "true" : "false";
}

ControleDePagamento::ControleDePagamento(Pagamento pagamento1, Pagamento pagamento2){
  pagamentos[0] = &pagamento1;
  pagamentos[1] = &pagamento2;
}

ControleDePagamento::~ControleDePagamento(){}
