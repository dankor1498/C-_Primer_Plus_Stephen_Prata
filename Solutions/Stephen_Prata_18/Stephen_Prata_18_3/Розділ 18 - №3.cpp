// Розділ 18 - №3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

long double sum_values() { return 0.0; }

template<typename T, typename... Args>
long double sum_values(T value, Args... args)
{
	return value + sum_values(args...);
}

int main()
{
	std::cout << sum_values(1, 3, 1, 40.5, 1, -45.398, 10);
	return 0;
}