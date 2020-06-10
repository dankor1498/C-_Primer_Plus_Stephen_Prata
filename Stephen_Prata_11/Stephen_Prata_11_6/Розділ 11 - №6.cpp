// Розділ 11 - №6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stonewt.h"


int main()
{
	Stonewt mas[6];
	mas[0] = { 285.7 };
	mas[1] = 325;
	*(mas + 2) = Stonewt(21, 8);
	for (int i = 3; i < 6; i++) {
		cout << "Stonewt #" << i << ": ";
		double stn;
		cin >> stn;
		*(mas + i) = stn;
	}
	cout << endl;
	for (int i = 0; i < 6; i++) {
		cout << *(mas + i);
	}
	cout << endl;
	Stonewt max, min;
	max = min = mas[0];
	int stone11 = 0;
	for (int i = 0; i < 6; i++) {
		if (mas[i] > max)
			max = mas[i];
		if (mas[i] < min)
			min = mas[i];
		if (mas[i] >= 11)
			stone11++;
	}
	cout << "Max:\n" << max << "Min:\n" << min << "Stone > 11: " << stone11 << endl;
	cin.get();
	return 0;
}

