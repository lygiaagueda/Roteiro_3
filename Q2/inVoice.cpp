#include <iostream>
#include <string>
#include "inVoice.h"

using namespace std;

InVoice::InVoice(){
	this->numero = 0;
	this->descricao = " ";
	this->quantComprada = 0;
	this->preco = 0;
}

InVoice::InVoice(int numero, string descricao, int quantComprada, double preco){
	this->numero = numero;
	this->descricao = descricao;
	this->quantComprada = quantComprada;
	this->preco = preco;
 
	if(preco < 0){
		preco = 0.0;
	}

	if(quantComprada < 0){
		quantComprada = 0;
	}
}

InVoice::~InVoice(){

}

void InVoice::setNumero(int numero){
	this->numero = numero;
}

void InVoice::setDescricao(string descricao){
	this->descricao = descricao;
}

void InVoice::setQuantComprada(int quantComprada){
	this->quantComprada = quantComprada;
}

void InVoice::setPreco(double preco){
	this->preco = preco;
}

int InVoice::getNumero(){
	return numero;
}

string InVoice::getDescricao(){
	return descricao;
}

int InVoice::getQuantComprada(){
	return quantComprada;
}

double InVoice::getPreco(){
	return preco;
}

double InVoice::getInVoiceAmount(int quantComprada, double preco){
	if(quantComprada < 0){
		return 0;
	}

	if(preco < 0){
		return 0;
	}

	return quantComprada*preco;
}