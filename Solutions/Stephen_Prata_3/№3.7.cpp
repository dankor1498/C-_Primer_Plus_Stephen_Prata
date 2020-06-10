#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double l100, l;
	cout << "L/100 km: ";
	cin >> l100;
	cout << "Miles per gallon: " << 62.14/(l100/3.875) << endl;
	
  	cin.get();
}
	
