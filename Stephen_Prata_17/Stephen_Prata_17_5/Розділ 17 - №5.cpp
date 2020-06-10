// Розділ 17 - №5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <set>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <Windows.h>

using namespace std;

const char *name1 = "mat.dat";
const char *name2 = "pat.dat";
const char *name3 = "matnpat.dat";

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const char name_m[6][10] = { "Nick", "Ghon", "Pol", "Lisa", "Daniel", "Alex" };
	const char name_p[6][10] = { "Nick", "Gregor", "Poll", "Lisa", "Daniel", "Alexsa" };

	ofstream fout1(name1, ios_base::out | ios_base::binary);
	ofstream fout2(name2, ios_base::out | ios_base::binary);
	for (int i = 0; i < 6; i++)
		fout1.write((char *)name_m[i], sizeof name_m[i]);
	for (int i = 0; i < 6; i++)
		fout2.write((char *)name_p[i], sizeof name_m[i]);
	fout1.close();
	fout2.close();

	ifstream fin1(name1, ios_base::in | ios_base::binary);
	if (!fin1.is_open()) {
		cerr << "Could not open " << name1 << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin2(name2, ios_base::in | ios_base::binary);
	if (!fin2.is_open()) {
		cerr << "Could not open " << name2 << endl;
		exit(EXIT_FAILURE);
	}

	list<string> met;
	string str;
	char st[10];
	while (fin1.read((char *)st, sizeof st))
	{
		str = st;
		met.push_back(str);
	}
	cout << "List Met:\n";
	met.sort();
	for (auto k : met) cout << k << endl;

	list<string> pet;
	while (fin2.read((char *)st, sizeof st))
	{
		str = st;
		pet.push_back(str);
	}
	cout << "\nList Pet:\n";
	pet.sort();
	for (auto k : pet) cout << k << endl;

	cout << "\n\nList Pet & Met:\n";
	set<string> mets(met.begin(), met.end());
	set<string> pets(pet.begin(), pet.end());
	set<string> metpet;
	set_union(mets.begin(), mets.end(), pets.begin(), pets.end(),
		insert_iterator<set<string> >(metpet, metpet.begin()));
	for (auto k : metpet) cout << k << endl;

	ofstream fout3(name3, ios_base::out | ios_base::binary);
	for (auto k : metpet) {
		strcpy_s(st, 10, k.c_str());
		fout3.write((char *)st, sizeof st);
	}

	fout3.close();
	fin1.close();
	fin2.close();
}
