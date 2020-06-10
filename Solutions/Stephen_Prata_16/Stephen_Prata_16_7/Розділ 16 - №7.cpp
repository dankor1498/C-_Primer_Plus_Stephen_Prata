// Розділ 16 - №7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib> 
#include <ctime> 

using namespace std;
typedef vector<int> vint;

vint Lotto_1(int k, int kn);
vint Lotto_2(int k, int kn);

int main()
{
	for (auto n : Lotto_1(51, 6)) {
		cout << n << ' ';
	}
	cout << endl << endl;
	for (auto n : Lotto_2(51, 6)) {
		cout << n << ' ';
	}
}

vint Lotto_1(int k, int kn) {
	srand(time(0));
	vint loto;
	for (int i = 0; i < kn; i++) {
		int r = 0 + rand() % k;
		if (count(loto.begin(), loto.end(), r) == 0) {
			loto.push_back(r);
			continue;
		}
		i--;
	}
	sort(loto.begin(), loto.end());
	return loto;
}

vint Lotto_2(int k, int kn)
{
	vint loto;

	for (int i = 0; i <= k; i++) {
		loto.push_back(i);
	}

	random_shuffle(loto.begin(), loto.end());

	sort(loto.begin(), loto.begin() + kn);

	return vint(loto.begin(), loto.begin() + kn);
}
