#include <Windows.h>
#include <iostream>

using namespace std;

template <class T> 
T max5(T *arr);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int mas[5] = { 8, 48, -780, 50, 0 };
	double mass[5] = { 8.25, 48.99, 78.25, 5.25, 110.125 };
	cout << max5(mas) << endl << max5(mass);
		
  	cin.get();
}

template <class T>
T max5(T *arr) {
	T max = *arr;
	for (int i = 0; i < 5; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	return max;
}


