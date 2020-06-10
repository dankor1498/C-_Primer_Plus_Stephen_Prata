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
	
	int sum = 0, kil;
	for (int i = 0; i < 12; i++) {
		cout << mas[i] << " -- ";
		cin >> kil;
		sum += kil;
	}
	cout << "Sum of all months - " << sum;
  	
	cin.get();
    return 0;
}
	
