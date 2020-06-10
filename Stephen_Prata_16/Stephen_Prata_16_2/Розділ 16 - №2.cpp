// Розділ 16 - №2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <cctype>
#include <algorithm>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool define_palindrome(string &);

int main()

{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	string str("Madam, I'm Adam");
	cout << "Line: \"" << str << "\"\n";
	define_palindrome(str);
	cout << "Enter a line: " << endl;
	getline(cin, str);
	define_palindrome(str);
}

bool define_palindrome(string & str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (ispunct(str[i]) || isspace(str[i])) {
			str.erase(str.begin() + i);
			i--;
		}
		str[i] = tolower(str[i]);
	}

	string str_r(str.rbegin(), str.rend());

	if (str == str_r) {
		cout << str_r << " == " << str << endl;
		return true;
	}
	cout << str_r << " != " << str << endl;
	return false;
}
