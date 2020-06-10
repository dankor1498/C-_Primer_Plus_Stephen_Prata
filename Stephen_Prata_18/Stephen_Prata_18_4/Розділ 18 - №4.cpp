// Розділ 18 - №4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using std::list;
using std::cout;
using std::endl;
using std::for_each;
using std::remove_if;

int main()
{
	list<int> yadayada {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

	auto outint = [](int n) { std::cout << n << " "; };

	cout << "Original lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if([](int cutoff) { return 100 < cutoff; });           
	etcetera.remove_if([](int cutoff) { return 200 < cutoff; });   
	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	std::cin.get();
	return 0;
}