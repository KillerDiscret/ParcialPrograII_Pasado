#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
using namespace System;

class CEvento
{
protected:
	int contador;
	int bateria;
	int n;
	SYSTEMTIME hora;
	
public:
	CEvento();
	void set_n(int N);
	void set_contador(int CONTADOR);
	void set_bateria(int BATERIA);
	int get_n();
	int get_contador();
	int get_bateria();
	void get_hora();
	~CEvento();
};
CEvento::CEvento()
{
	contador = 0;
	bateria = 15;
	n = 3;
	
}
void CEvento::set_n(int N)
{
	n = N;
}
void CEvento::set_contador(int CONTADOR)
{
	contador = CONTADOR;
}
void CEvento::set_bateria(int BATERIA)
{
	bateria = BATERIA;
}
int CEvento::get_n()
{
	return n;
}
int CEvento::get_contador()
{
	return contador;
}
int CEvento::get_bateria()
{
	return bateria;
}
void CEvento::get_hora()
{
	GetLocalTime(&hora);
	cout << hora.wHour <<":"<< hora.wMinute<<":" << hora.wSecond << endl;
}
CEvento::~CEvento()
{

}




