#include <Windows.h>
#include <iostream>

using namespace std;

int Factoial(int i);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int n;
	cout << "Enter n - ";
	cin >> n;
	cout << Factoial(n);
	
  	cin.get();
}

int Factoial(int i) { 
	if (i == 1) return i;
	i *= Factoial(i - 1);
	return i;
}
