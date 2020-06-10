// Розділ 17 - №3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	if (argc < 3)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1]);
	if (!fin.is_open()) {
		cerr << "Could not open " << argv[1] << endl; 
		exit(EXIT_FAILURE);
	}

	ofstream fout(argv[2]);
	if (!fout.is_open()) {
		cerr << "Could not open " << argv[2] << endl; 
		exit(EXIT_FAILURE);
	}

	string str;
	while (getline(fin, str))
	{
		fout << str;
		fout << endl;
	}

	fout.close();
	fin.close();
}