#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H

#include <iostream>
#include <string>

#include "pagamento.h"

using namespace std;

class ControleDePagamento {
  private:
    Pagamento *pagamentos[2];

  public:
    void setPagamentos(Pagamento pagamentos, int funcionario);
    Pagamento getPagamentos(int funcionario);

    double calculaTotalDePagamentos();
    string existePagamentoParaFuncionario( string nomeDoFuncionario);

    ControleDePagamento(Pagamento pagamento1, Pagamento pagamento2);
    virtual ~ControleDePagamento();
};

#endif

