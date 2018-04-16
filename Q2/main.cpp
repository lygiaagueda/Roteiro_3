#include <iostream>
#include <string>
#include "inVoice.h"

using namespace std;

int main(void){
	InVoice produto1(1, "led rosa", -1, 10.50), produto2(21, "led azul", 10, 13.25);

	cout << "Produto: " << produto1.getNumero() << "\n\t" << produto1.getDescricao() << "\n\t" << produto1.getQuantComprada() << "\n\t" << produto1.getPreco() << "\n";
	cout << "\tFatura do produto: " << produto1.getInVoiceAmount(produto1.getQuantComprada(), produto1.getPreco()) << "\n";

	cout << "Produto: " << produto2.getNumero() << "\n\t" << produto2.getDescricao() << "\n\t" << produto2.getQuantComprada() << "\n\t" << produto2.getPreco() << "\n";
	cout << "\tFatura do produto: " << produto2.getInVoiceAmount(produto2.getQuantComprada(), produto2.getPreco()) << "\n";

	produto1.setNumero(3);
	produto1.setDescricao("led amarelo");
	produto1.setQuantComprada(-3);
	produto1.setPreco(3.60);

	cout << "Produto: " << produto1.getNumero() << "\n\t" << produto1.getDescricao() << "\n\t" << produto1.getQuantComprada() << "\n\t" << produto1.getPreco() << "\n";
	cout << "\tFatura do produto: " << produto1.getInVoiceAmount(produto1.getQuantComprada(), produto1.getPreco()) << "\n";



	return 0;
}