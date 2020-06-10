#include <Windows.h>
#include <iostream>

using namespace std;

double SerGarm(double x, double y);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double a, b;
	cin >> a >> b;
	while ( a != 0 && b != 0) {
		cout << "Harmonic mean - " << SerGarm(a, b) << endl;
		cin >> a >> b;
	}
	
  	cin.get();
}

double SerGarm(double x, double y) {  
	return 2.0 * x * y / (x + y);
}	
