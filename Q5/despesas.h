#ifndef DEPSPESAS_H
#define DEPSPESAS_H

#include <iostream>
#include <string>

using namespace std;

class Despesa{
    private:
        double valor;
        string tipoDeGasto;
    public:
        Despesa();
        Despesa(double valor, string tipoDeGasto);

        void setValor(double valor);
        void setTipoDeGasto(string tipoDeGasto);

        double getValor();
        string getTipoDeGasto();

        virtual ~Despesa();
};

#endif