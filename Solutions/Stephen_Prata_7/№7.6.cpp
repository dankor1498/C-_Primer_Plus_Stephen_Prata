#include <Windows.h>
#include <iostream>

using namespace std;

int Fill_array(double mas[], int n);
void Show_array(double *pv, int n);
void Reverse_array(double *ps, int n);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int n;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	double *mas = new double[n];
	cout << "Enter values, end - non-digital input: " << endl;
	int k = Fill_array(mas, n);
	Reverse_array(mas, k);
	cout << "The result of the permutation: " << endl;
	Show_array(mas, k);
	delete[] mas;

  	cin.get();
}

int Fill_array(double mas[], int n) {  
	int i;
	for (i = 0; i < n; i++) {
		cin >> mas[i];
		if (!cin) {
			return i;
		}
	}
	return i;
}

void Show_array(double *pv, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(pv+i) << "  ";
	}
}

void Reverse_array(double *ps, int n) {
	double k;
	if (n % 2 != 0) {
		for (int i = 1, j = n - 2; i <= n / 2; i++, j--) {
			k = *(ps + i);
			*(ps + i) = *(ps + j);
			*(ps + j) = k;
		}
	}
	else {
		for (int i = 1, j = n - 2; i < n / 2; i++, j--) {
			k = *(ps + i);
			*(ps + i) = *(ps + j);
			*(ps + j) = k;
		}
	}
}
