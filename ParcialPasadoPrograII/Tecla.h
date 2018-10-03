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
	do {
		system("cls");
		cout << "Ingrese el nuevo valor de n:" << endl;
		cin >> n;
	} while (n<=1||n>5);
}
CEvento_Tecla::~CEvento_Tecla()
{

}