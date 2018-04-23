#include <iostream>
#include <string>

#include "pagamento.h"
#include "controledepagamento.h"

using namespace std;

int main() {
  Pagamento pagamento1 = Pagamento(100, "Luan");
  Pagamento pagamento2 = Pagamento(100, "Felipe");
  ControleDePagamento teste = ControleDePagamento(pagamento1, pagamento2);

  cout << teste.calculaTotalDePagamentos() << endl;
  cout << teste.existePagamentoParaFuncionario("Luan") << endl;
  cout << teste.existePagamentoParaFuncionario("Rodrigo") << endl;

  return 0;
}
