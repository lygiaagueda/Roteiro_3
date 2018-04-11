#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main(){
	Data data1(1, 3, 2018), data2(32, 1, 1991), data3(28, 2, 2030);

	if(data1.verificaData(data1.getDia(), data1.getMes(), data1.getAno())){
		cout << "data1: Valida" << endl;
	}else{
		cout << "data1: Invalida" << endl;
	}

	if(data2.verificaData(data2.getDia(), data2.getMes(), data2.getAno())){
		cout << "data2: Valida" << endl;
	}else{
		cout << "data2: Invalida" << endl;
	}

	if(data3.verificaData(data3.getDia(), data3.getMes(), data3.getAno())){
		cout << "data3: Valida" << endl;
	}else{
		cout << "data3: Invalida" << endl;
	}

	cout << "data1: " << data1.getDia() << '/' << data1.getMes() << '/' << data1.getAno() << endl;

	data2.setDia(30);
	data2.setMes(4);
	data2.setAno(1730);

	if(data2.verificaData(data2.getDia(), data2.getMes(), data2.getAno())){
		cout << "data2: Valida" << endl;
	}else{
		cout << "data2: Invalida" << endl;
	}

	cout << "data2: " << data2.getDia() << '/' << data2.getMes() << '/' << data2.getAno() << endl;

	data3.avancarDia(data3.getDia(), data3.getMes(), data3.getAno());

	cout << "data3: " << data3.getDia() << '/' << data3.getMes() << '/' << data3.getAno() << endl;

	data1.setDia(31);
	data1.setMes(12);
	data1.setAno(3011);

	if(data1.verificaData(data1.getDia(), data1.getMes(), data1.getAno())){
		cout << "data1: Valida" << endl;
	}else{
		cout << "data1: Invalida" << endl;
	}

	data1.avancarDia(data1.getDia(), data1.getMes(), data1.getAno());

	cout << "data1: " << data1.getDia() << '/' << data1.getMes() << '/' << data1.getAno() << endl;
}