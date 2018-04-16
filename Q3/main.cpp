#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

int main(void){
	Empregado empregado1("Jose", "Felipe", -1), empregado2("Lygia", "Agueda", 1000.50);

	cout << "Nome: " << empregado1.getNome() << " " << empregado1.getSobrenome() << "\n" << "Salario mensal: " << empregado1.getSalario() << "\n"
		 << "Salario anual: " << empregado1.getSalario() * 12 << "\n\n";
	cout << "Nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << "\n" << "Salario mensal: " << empregado2.getSalario() << "\n"
		 << "Salario anual: " << empregado2.getSalario() * 12 << "\n\n";

	empregado1.setSalario((empregado1.getSalario() * 0.1) +empregado1.getSalario());
	empregado2.setSalario((empregado2.getSalario() * 0.1) +empregado2.getSalario());

	cout << "Salarios apos aumeto de 10 por cento: " << endl;
	cout << "Nome: " << empregado1.getNome() << " " << empregado1.getSobrenome() << "\n" << "Salario mensal: " << empregado1.getSalario() << "\n"
		 << "Salario anual: " << empregado1.getSalario() * 12 << "\n\n";
	cout << "Nome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << "\n" << "Salario mensal: " << empregado2.getSalario() << "\n"
		 << "Salario anual: " << empregado2.getSalario() * 12 << "\n\n";

	return 0;
}