// Розділ 9 - №3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <new>

using std::cout;
using std::cin;
using std::endl;

struct chaff
{
	char dross[20];
	int slag;
};

char sss[60];

int main()
{
	chaff *ps = new(sss) chaff[2];
	strcpy_s(ps->dross, "Vasa Pupkin");
	strcpy_s((ps + 1)->dross, "Vasa Dupkin");
	ps->slag = 45;
	(ps + 1)->slag = 46;
	cout << ps->dross << "    " << ps->slag << endl;
	cout << (ps + 1)->dross << "    " << (ps + 1)->slag << endl;
	chaff *pd = new chaff[2];
	strcpy_s(pd->dross, "Vasa Pupkin");
	strcpy_s((pd + 1)->dross, "Vasa Dupkin");
	pd->slag = 45;
	(pd + 1)->slag = 46;
	cout << pd->dross << "    " << pd->slag << endl;
	cout << (pd + 1)->dross << "    " << (pd + 1)->slag << endl;
	
	return 0;
}

