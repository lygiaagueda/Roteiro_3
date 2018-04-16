#include <iostream>
#include <string>
#include "empregado.h"

using namespace std;

Empregado::Empregado(){
}

Empregado::Empregado(string nome, string sobrenome, double salario){
	if(salario < 0){
		salario = 0.0;
	}
	
	this->nome = nome;
	this->sobrenome = sobrenome;
	this->salario = salario;
}

Empregado::~Empregado(){
}

void Empregado::setNome(string nome){
	this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome){
	this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
	if(salario < 0){
		this->salario = 0.0;
	}
	this->salario = salario;
}

string Empregado::getNome(){
	return nome;
}

string Empregado::getSobrenome(){
	return sobrenome;
}

double Empregado::getSalario(){
	return salario;
}