// Розділ 9 - №2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

const int ArSize = 10;

void strcount(const string);

int main()
{
	
	string input;
	cout << "Enter a line:\n";
	getline(cin, input);
	while (input != "")
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const string str)
{
	static int total = 0;        // static local variable
	int count = 0;               // automatic local variable
	int i = 0;
	cout << "\"" << str << "\" contains ";
	while (str[i] != '\0') {
		if (isspace(str[i])) {
			i++;
			continue;
		}
		count++;
		i++;
	}
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
