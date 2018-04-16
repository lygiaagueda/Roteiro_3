#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

using namespace std;

class Empregado{
	private:
		string nome;
		string sobrenome;
		double salario;

	public:
		Empregado();
		Empregado(string, string, double);
		virtual ~Empregado();
		void setNome(string);
		void setSobrenome(string);
		void setSalario(double);
		string getNome();
		string getSobrenome();
		double getSalario();
		double getInVoiceAmount(int, double);
};

#endif