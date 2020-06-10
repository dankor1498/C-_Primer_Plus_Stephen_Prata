// Розділ 18 - №1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <initializer_list>

template <typename T>
auto average_list(const std::initializer_list<T> & ril) -> T;

int main()
{
	using namespace std;
	
	auto q = average_list({ 15.4, 10.7, 9.0 });
	cout << q << endl;
	
	cout << average_list({ 20, 30, 19, 17, 45, 38 }) << endl;
	
	auto ad = average_list<double>({ 'А', 70, 65.33 });
	cout << ad << endl;

	return 0;
}

template<typename T>
auto average_list(const std::initializer_list<T>& ril) -> T
{
	T sum = 0;
	int n = ril.size();
	if (n > 0)
	{
	for (auto r : ril)
		sum += r;
	return sum / n;
	}
	return sum;
}
