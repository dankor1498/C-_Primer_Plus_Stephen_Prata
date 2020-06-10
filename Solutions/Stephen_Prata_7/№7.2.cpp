#include <Windows.h>
#include <iostream>

using namespace std;

int VvodMas(int *pm, int n);
void Vyvod(int mas[], int n);
void Ser(int *ps, int n);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int mas[10];
	int k = VvodMas(mas, 10);
	Vyvod(mas, k);
	Ser(mas, k);
	
  	cin.get();
}

int VvodMas(int *pm, int n) {        
	cout << "Enter golf values, maximum - 10, end any letter: \n";
	int i = 0;
	while (cin >> *(pm + i++) && i < n);
	if(!cin) return i-1;
	return i;
}

void Vyvod(int mas[], int n) {
	cout << "All values are - ";
	for (int *pm = mas; pm < (mas+n); pm++) {
		cout << *pm << " ";
	}
}

void Ser(int *ps, int n) {
	float ser = 0;
	for (int i = 0; i < n; i++) {
		ser += *(ps + i);
	}
	ser /= n;
	cout << endl << "The average for the game - " << ser;
}	
