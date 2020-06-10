#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double v, l;
	cout << "Distance: ";
	cin >> v;
	cout << "Number of liters: ";
	cin >> l;
	cout << "L/100 km: " << (l*100) / v << endl;
	
  	cin.get();
}
	
