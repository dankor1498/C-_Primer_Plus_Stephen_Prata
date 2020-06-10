// Розділ 16 - №4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iterator>
#include <algorithm>

const int N = 10;
int reduce(long ar[], int n);
void print(int k) { std::cout << k << " "; }

int main()
{
	long mas[N] = { 75,75,10,10,10,0,1,7,0,5 };
	for (auto i : mas) print(i);
	std::cout << std::endl;
	std::for_each(mas, mas + reduce(mas, N), print);
	std::cout << std::endl;

	//STL
	long mas2[N] = { 75,75,10,10,10,0,1,7,0,5 };
	std::sort(mas2, mas2 + N);
	std::copy(mas2, std::unique(mas2, mas2 + N), std::ostream_iterator<int>(std::cout, " "));
}

int reduce(long ar[], int n)
{
	long k;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (ar[j] < ar[i]) {
				k = ar[j];
				ar[j] = ar[i];
				ar[i] = k;
			}
		}
	}

	for (int i = 0; i < n; i++)	{
		for (int j = i + 1; j < n; j++)	{
			if (ar[i] == ar[j]) {
				for (int c = j; c < n - 1; c++)	{
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
