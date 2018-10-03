#pragma once
#include "Evento.h"
class CEvento_Bateria: public CEvento
{
public:
	CEvento_Bateria();
	void Bateria_restante();
	void Bateria_minima();
	~CEvento_Bateria();

};
CEvento_Bateria::CEvento_Bateria():CEvento()
{

}
void CEvento_Bateria::Bateria_restante()
{
	for (int i=0; i<get_bateria();i++)
	{
		cout << char(7);
	}
}
void CEvento_Bateria::Bateria_minima()
{
	cout << "Solo queda uno de bateria" << endl;
}

CEvento_Bateria::~CEvento_Bateria()
{

}
