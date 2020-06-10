// Розділ 18 - №2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "Cpmv.h"


int main()
{
	Cpmv one("qcode", "zcode");
	Cpmv two = one + one; // вызов конструктора с переносом
	cout << "object one: ";
	one.Display();
	cout << "object two: ";
	two.Display();
	Cpmv three, four;
	cout << "three = one\n";
	three = one; // автоматическое присваивание с копированием
	cout << "now object three = ";
	three.Display();
	cout << "and object one = ";
	one.Display();
	cout << "four = one + two\n";
	four = one + two; // автоматическое присваивание с переносом
	cout << "now object four = ";
	four.Display();
	cout << "four = move(one)\n";
	four = move(one); // принудительное присваивание с переносом
	cout << "now object four = ";
	four.Display();
	cout << "and object one = ";
	one.Display();
}

