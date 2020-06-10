#include <Windows.h>
#include <iostream>
#include <cctype>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	float mas[10], ser = 0;
	int i = 0;
	cout << "Enter 10 values: " << endl;
	while (cin >> mas[i] && i < 9) {
		i++;
	}
	if (i < 9) {
		i--;
	}
	for (int j = 0; j <= i; j++) {
		ser += mas[j];
	} 
	i++;
	ser /= i;
	cout << "Ser - " << ser;
	
  	cin.get();
}
	
