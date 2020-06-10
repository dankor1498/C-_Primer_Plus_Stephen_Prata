// Розділ 10 - №1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Class.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
	double pgold, mgold;

	Bank num_1("Ivan Pupcin", "N12045BC", 3500.50);
	Bank num_2("Korotych Danyil", "N12058BA", 7523.89);
	Bank num_3;

	num_1.display();
	num_2.display();
	num_3.display();

	cout << "Enter amount to balance: ";
	cin >> pgold;
	num_1.plus_balans(pgold);
	cout << "Enter the amount you want to deduct: ";
	cin >> mgold;
	num_2.minus_balans(mgold);
	cout << endl;

	num_1.display();
	num_2.display();

	cin.get();
	return 0;
}

