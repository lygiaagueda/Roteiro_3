#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

Data::Data(){
	this->dia = 0;
	this->mes = 0;
	this->ano = 0;
}

Data::Data(int dia, int mes, int ano){
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

Data::~Data(){
}

void Data::setDia(int dia){
	this->dia = dia;
}

void Data::setMes(int mes){
	this->mes = mes;
}

void Data::setAno(int ano){
	this->ano = ano;
}

int Data::getDia(){
	return dia;
}

int Data::getMes(){
	return mes;
}

int Data::getAno(){
	return ano;
}

int Data::avancarDia(int dia, int mes, int ano){
	if(mes == 12 && dia == 31){
		this->dia = 1;
		this->mes = 1;
		this->ano++;
	}else if((mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 10 || mes == 12) && dia == 31){
		this->dia = 1;
		this->mes ++;
	}else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30){
		this->dia = 1;
		this->mes ++;
	}else if(mes == 2 && dia == 28){
		this->dia = 1;
		this->mes++;
	}else{
		this->dia++;
	}
}

bool Data::verificaData(int dia, int mes, int ano){
	if(dia < 0 || mes < 0 || mes > 12){
		return false;
	}else if((mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 10 || mes == 12) && dia > 31){
		return false;
	}else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
		return false;
	}else if(mes == 2 && dia > 28){
		return false;;
	}else if(ano < 0){
		return false;
	}

	return true;
}