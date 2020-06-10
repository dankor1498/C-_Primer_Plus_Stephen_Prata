// Розділ 16 - №8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <list>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	list<string> met;
	string str;
	cout << "Enter list Met:\n";
	while (cin >> str && str != "q")
	{
		met.push_back(str);
	}
	cout << "List Met:\n";
	for (auto k : met) cout << k << " ";

	list<string> pet;
	cout << "\n\nEnter list Pet:\n";
	while (cin >> str && str != "q")
	{
		pet.push_back(str);
	}
	cout << "List Pet:\n";
	for (auto k : pet) cout << k << " ";

	cout << "\n\nList Pet & Met:\n";
	set<string> mets(met.begin(), met.end());
	set<string> pets(pet.begin(), pet.end());
	set<string> metpet;
	set_union(mets.begin(), mets.end(), pets.begin(), pets.end(),
		insert_iterator<set<string> >(metpet, metpet.begin()));
	for (auto k : metpet) cout << k << " ";
}

