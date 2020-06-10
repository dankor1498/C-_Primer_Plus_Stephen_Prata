#include <Windows.h>
#include <iostream>

using namespace std;

double CelsiusFahrenheit(double c){
	return (1.8*c) + 32;
}

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	int t;
  	cout << "Please enter a Celsius value: ";
  	cin >> t;
  	cout << t << " degrees Celsius is " << CelsiusFahrenheit(t) 
	  << " degrees Fahrenheit." << endl;
  	cin.get();
}
	
