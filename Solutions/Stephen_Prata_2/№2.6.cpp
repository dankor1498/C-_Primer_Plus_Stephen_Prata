#include <Windows.h>
#include <iostream>

using namespace std;

double YearsAstrUnits(double c){
	return c*63240;
}

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	double y;
  	cout << "Enter the number of light years: ";
  	cin >> y;
  	cout << y << " light years = " << YearsAstrUnits(y) 
	  << " astronomical units." << endl;
  	cin.get();
}
	
