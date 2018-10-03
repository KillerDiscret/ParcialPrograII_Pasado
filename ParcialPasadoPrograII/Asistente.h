#pragma once
#include "Bateria.h"
#include "Tecla.h"
class CAsistente
{
private:
	CEvento_Bateria *obj1;
	CEvento_Tecla *obj2;
public:
	CAsistente();
	void teclaT();
	void teclaC();
	void restante();
	void minima();
	~CAsistente();
};
CAsistente::CAsistente()
{
	obj1 = new CEvento_Bateria();
	obj2 = new CEvento_Tecla();
}
void CAsistente::teclaT()
{
	obj2->Presiona_teclaT();
}
void CAsistente::teclaC()
{
	obj2->Presiona_teclaC();
}
void CAsistente::restante()
{
	obj1->Bateria_restante();
}
void CAsistente::minima()
{
	obj1->Bateria_minima();
}
CAsistente::~CAsistente()
{

}