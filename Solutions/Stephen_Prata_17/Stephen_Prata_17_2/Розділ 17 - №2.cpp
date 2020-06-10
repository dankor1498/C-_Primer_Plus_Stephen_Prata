// Розділ 17 - №2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	if (argc == 1)
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}

	char ch;
	ofstream fout(argv[1]);

	if (!fout.is_open()) {
		cerr << "Could not open " << argv[1] << endl; //не удается открыть файл
		exit(EXIT_FAILURE);
	}

	while (cin.get(ch))
	{
		fout << ch;
	}

}