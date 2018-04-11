#ifndef DATA_H
#define DATA_H
#include <iostream>

class Data{
	private:
		int dia;
		int mes;
		int ano;

	public:
		Data();
		Data(int, int, int);
		virtual ~Data();
		void setDia(int);
		void setMes(int);
		void setAno(int);
		int getDia();
		int getMes();
		int getAno();
		int avancarDia(int, int, int);
		bool verificaData(int, int, int);
};

#endif /*DATA_H*/