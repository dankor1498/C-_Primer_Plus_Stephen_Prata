// Розділ 12 - №1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Cow.h"


int main()
{
	Cow n_0;
	Cow n_1("Vasa", "tenis", 25.8);
	Cow n_2 = { "Den", "game", 85.2 };
	Cow *n_3;
	n_3 = new Cow("Petya", "golf", 85.5);
	Cow n_4;
	n_4 = n_1;
	Cow n_5 = *n_3;
	n_0.ShowCow();
	n_1.ShowCow();
	n_2.ShowCow();
	n_3->ShowCow();
	n_4.ShowCow();
	return 0;
}

