// Розділ 17 - №1.cpp : Этот файл aсодержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int count = 0;
	while (cin.peek() != '$') {
		cin.get();
		count++;
	}
	cout << "Символов до $: " << count;
}

