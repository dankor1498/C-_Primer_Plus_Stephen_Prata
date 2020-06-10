#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
	const char * mas[12] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	
	int sum = 0, sum3 = 0;
	int mass[3][12];
	for (int j = 0; j < 3; j++) {
		cout << j + 1 << "-st year:" << endl;
		for (int i = 0; i < 12; i++) {
			cout << mas[i] << " -- ";
			cin >> mass[j][i];
			sum += mass[j][i];
		}
		cout << "Sum of all months - " << sum << endl;
		sum3 += sum;
		sum = 0;
	}
	cout << "Sum of all years - " << sum3;
  	
	cin.get();
    return 0;
}
	
