#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class Pagamento {
  private:
    double valorDoPagamento;
    string nomeDoFuncionario;

  public:
    void setValorDoPagamento(double valorDoPagamento);
    void setNomeDoFuncionario(double nomeDoFuncionarioo);

    double getValorDoPagamento();
    string getNomeDoFuncionario();

    Pagamento(double valorDoPagamento, string nomeDoFuncionario);
    virtual ~Pagamento();
};

#endif
