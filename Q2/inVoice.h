#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>

using namespace std;

class InVoice{
	private:
		int numero;
		string descricao;
		int quantComprada;
		double preco;

	public:
		InVoice();
		InVoice(int, string, int, double);
		virtual ~InVoice();
		void setNumero(int);
		void setDescricao(string);
		void setQuantComprada(int);
		void setPreco(double);
		int getNumero();
		string getDescricao();
		int getQuantComprada();
		double getPreco();
		double getInVoiceAmount(int, double);
};

#endif