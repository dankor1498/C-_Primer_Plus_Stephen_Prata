// Розділ 16 - №9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
#include <ctime> 

using namespace std;

int main()
{
	srand(time(0));

	vector<int> vi0;
	for (int i = 0; i < 100000; i++) 
		vi0.push_back(0 + rand() % 100);

	vector<int> vi(vi0);
	list<int> li(vi0.begin(), vi0.end());
	
	clock_t start = clock();
	sort(vi.begin(), vi.end());
	clock_t end = clock();
	cout << double(end - start) / CLOCKS_PER_SEC << endl;

	start = clock();
	li.sort();
	end = clock();
	cout << double(end - start) / CLOCKS_PER_SEC << endl;
	
	copy(vi0.begin(), vi0.end(), li.begin());
	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << double(end - start) / CLOCKS_PER_SEC;
}

