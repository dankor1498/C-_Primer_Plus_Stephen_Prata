#include <Windows.h>
#include <iostream>

using namespace std;

const int fd = 12;
const double dm = 0.0254;
const double fk = 2.2;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
  	double feet, d, pound; 
	
	cout << "Feet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> d;
	cout << "Pound: ";
	cin >> pound;
	
	d +=(feet * fd);
	d *= dm;
	pound /= fk;

	cout << "BMI: " << pound/(d*d) << endl;
	
  	cin.get();
}
	
