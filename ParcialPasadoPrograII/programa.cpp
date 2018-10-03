#include "Evento.h"
#include "Asistente.h"
using namespace std;
using namespace System;
int main()
{
	CEvento *objEvento;
	objEvento = new CEvento();
	CAsistente *objAsistente;
	objAsistente = new CAsistente();
	char tecla;
	int bateria;
	int contador;
	int aux;
	int N;
	aux = 1;
	while (1)
	{
		if (aux == 1)
		{
			aux = 0;
			system("cls");
			cout << "¿En que puedo ayudarte?" << endl;
			
		}

		if (_kbhit())
		{
			tecla = getch();
			if (tecla=='T'||tecla=='t')
			{
				objAsistente->teclaT();

				bateria=objEvento->get_bateria();
				bateria--;
				objEvento->set_bateria(bateria);
				contador = objEvento->get_contador();
				contador++;
				objEvento->set_contador(contador);
				aux = 1;
			}
			if (tecla=='C'||tecla=='c')
			{
				objAsistente->teclaC();
				N = objEvento->get_n();
				objEvento->set_n(N);
				bateria = objEvento->get_bateria();
				bateria--;
				objEvento->set_bateria(bateria);
				contador = objEvento->get_contador();
				contador++;
				objEvento->set_contador(contador);
				aux = 1;
			}
		
			if (objEvento->get_bateria()==1)
			{
				objAsistente->minima();
				aux = 1;
			}
			if ((objEvento->get_n() == objEvento->get_contador()) && objEvento->get_bateria()>1)
			{
				objAsistente->restante();
				objEvento->set_contador(0);
				aux = 1;
			}
			if (objEvento->get_bateria() == 0)
			{
				system("cls");
				cout << "el dispositivo se apago" << endl;
				break;
			}
			_getch();
		}
		
	}
	//hola mundo
	_getch();
}