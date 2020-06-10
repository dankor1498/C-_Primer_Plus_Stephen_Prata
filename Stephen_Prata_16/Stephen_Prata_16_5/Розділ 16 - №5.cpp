// Розділ 16 - №5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

const int N = 10;

template <typename Т>
int reduce(Т ar[], int n);

template <typename K>
void print(K k) { std::cout << k << " "; }

template <typename Т>
Т* reduce_stl(Т ar[], int n);

int main()
{
	long mas[N] = { 75,75,10,10,10,0,1,7,0,5 };
	for (auto i : mas) print<long>(i);
	std::cout << std::endl;
	std::for_each(mas, mas + reduce<long>(mas, N), print<long>);
	std::cout << std::endl;

	std::string str[N] = { "dog", "saw", "the", "cat", "and", "thought", "the", "cat", "fat", "perfect" };
	for (auto i : str) print<std::string>(i);
	std::cout << std::endl;
	std::for_each(str, str + reduce<std::string>(str, N), print<std::string>);
	std::cout << std::endl << std::endl << "STL:\n";

	long mas2[N] = { 75,75,10,10,10,0,1,7,0,5 };
	for (auto i : mas2) print<long>(i);
	std::cout << std::endl;
	std::for_each(mas2, reduce_stl<long>(mas2, N), print<long>);
	std::cout << std::endl;

	std::string str2[N] = { "dog", "saw", "the", "cat", "and", "thought", "the", "cat", "fat", "perfect" };
	for (auto i : str2) print<std::string>(i);
	std::cout << std::endl;
	std::for_each(str2, reduce_stl<std::string>(str2, N), print<std::string>);
	std::cout << std::endl;
	return 0;
}

template<typename Т>
int reduce(Т ar[], int n)
{
	Т k;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (ar[j] < ar[i]) {
				k = ar[j];
				ar[j] = ar[i];
				ar[i] = k;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ar[i] == ar[j]) {
				for (int c = j; c < n - 1; c++) {
					ar[c] = ar[c + 1];
				}
				n -= 1;
				if (ar[i] == ar[j]) {
					j--;
				}
			}
		}
	}

	return n;
}

template<typename Т>
Т* reduce_stl(Т ar[], int n)
{
	std::sort(ar, ar + n);
	Т *pt = std::unique(ar,ar + n);
	return pt;
}
