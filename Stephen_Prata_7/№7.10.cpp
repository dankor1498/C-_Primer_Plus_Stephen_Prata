#include <Windows.h>
#include <iostream>

using namespace std;

double add(double x, double y);
double add1(double x, double y);
double add2(double x, double y);
double calculate(double, double, double (*pv) (double, double));

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double a, b;
	double(*pf[3]) (double, double) = { add, add1, add2 };
	cout << "Enter two numbers, end - 0: " << endl;
	cin >> a >> b;
	while (a != 0 && b != 0) {
		cout << "Result: " << endl;
		for (int i = 0; i < 3; i++) {
			cout << calculate(a, b, *pf[i]) << endl;
		}
		cin >> a >> b;
	}
	cout << "\nDone\n"; 

  	cin.get();
}

double add(double x, double y) {
	cout << "Suma: ";
	return x + y;
}

double add1(double x, double y) {
	cout << "Mnogenna: ";
	return x * y;
}

double add2(double x, double y) {
	cout << "Ser aryfmetik: ";
	return (x + y) / 2;
}

double calculate(double a, double b, double(*pv) (double, double)) {
	return (*pv)(a, b);
}

