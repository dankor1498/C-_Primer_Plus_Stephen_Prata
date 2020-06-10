// Розділ 17 - №4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

const char *name1 = "Text_1.txt";
const char *name2 = "Text_2.txt";
const char *name3 = "Result.txt";

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	ifstream fin1(name1);
	if (!fin1.is_open()) {
		cerr << "Could not open " << name1 << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin2(name2);
	if (!fin2.is_open()) {
		cerr << "Could not open " << name2 << endl;
		exit(EXIT_FAILURE);
	}

	ofstream fout(name3);
	if (!fout.is_open()) {
		cerr << "Could not open " << name3 << endl;
		exit(EXIT_FAILURE);
	}

	string str1, str2;
	bool flag1, flag2;
	flag1 = flag2 = true;
	while (flag1 == true && flag2 == true)
	{
		if (!getline(fin1, str1))
			flag1 = false;
		if (!getline(fin2, str2))
			flag2 = false;
		if(flag1 == true && flag2 == true)
			fout << str1 + ' ' + str2 << endl;
	}

	if (flag1 == true) {
		fout << str1 << endl;
		while (getline(fin1, str1))
		{
			fout << str1 << endl;
		}
	}

	if (flag2 == true) {
		fout << str2 << endl;
		while (getline(fin2, str2))
		{
			fout << str2 << endl;
		}
	}

	fout.close();
	fin1.close();
	fin2.close();
}
