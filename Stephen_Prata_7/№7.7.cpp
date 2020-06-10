#include <Windows.h>
#include <iostream>

using namespace std;

const int Max = 5;

double* fill_array(double *ar, int limit);
void show_array(const double *ar, double *n); 
void revalue(double r, double *ar, double *n);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double properties[Max];
	double* size = fill_array(properties, Max);
	show_array(properties, size);
	cout << "Enter revaluation factor: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	show_array(properties, size);
	cout << "Is done. \n";

  	cin.get();
}

double* fill_array(double *ar, int limit) { 
	double temp;
	double *pv ;
	int i = 1;
	for (pv = ar + limit ; ar < pv; ar++, i++) {
		cout << "Enter value #" << i << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Invalid input, entry process terminated. \n";
			break;
		}
		else if (temp < 0)
			break;
		*ar = temp;
	}
	return ar;
}

void show_array(const double *ar, double *n) {
	for (int i = 1; ar < n; ar++, i++)	{
		cout << " Element #" << i << ": $";
		cout << *ar << endl;
	}
}

void revalue(double r, double *ar, double *n) {
	for (; ar < n; ar++) {
		*ar *= r;
	}
}
