#pragma once
#include "Evento.h"
class CEvento_Tecla:public CEvento
{
public:
	CEvento_Tecla();
	void Presiona_teclaT();
	void Presiona_teclaC();
	~CEvento_Tecla();

};
CEvento_Tecla::CEvento_Tecla() :CEvento()
{

}
void CEvento_Tecla::Presiona_teclaT()
{
	
	get_hora();
}
void CEvento_Tecla::Presiona_teclaC()
{
	int N;
	do {
		system("cls");
		cout << "Ingrese el nuevo valor de n:" << endl;
		cin >> N;
	} while (N<=1||N>5);
	set_n(N);
}
CEvento_Tecla::~CEvento_Tecla()
{

}