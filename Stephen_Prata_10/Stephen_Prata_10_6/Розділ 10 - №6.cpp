// Розділ 10 - №6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Class.h"


int main()
{
	Move mas[SIZE];
	Move plus(1.0, 2.0);
	double a, b;
	for (int i = 0; i < SIZE; i++) {
		cout << "Num_1 = ";
		cin >> a;
		cout << "Num_2 = ";
		cin >> b;
		mas[i] = { a, b };
	}
	cout << endl << "  ++1\t  ++2" << endl;
	for (int i = 0; i < SIZE; i++) {
		mas[i].add(plus);
		mas[i].showmove();
	}
	cin.get();
	return 0;
}

