#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
  	double a; 
	const int k = 12;
	cout << "Height in inches: _\b";
	cin >> a;
	cout << "Feet: " << int(a) * k << " Inches: " << (a * k) - (int(a) * k) << endl;
	
  	cin.get();
}
	
