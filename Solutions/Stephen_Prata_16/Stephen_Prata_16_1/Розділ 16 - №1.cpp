// Розділ 16 - №1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
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
	string str;
	cout << "Enter a line: " << endl;
	getline(cin, str);
	define_palindrome(str);
}

bool define_palindrome(string & str) {
	string str_r(str.rbegin(), str.rend());
	if (str == str_r) {
		cout << str_r << " == " << str;
		return true;
	}
	cout << str_r << " != " << str;
	return false;
}
