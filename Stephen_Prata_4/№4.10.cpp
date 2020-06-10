#include <Windows.h>
#include <iostream>
#include <array>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	array<double, 3> arr;
	for (int i = 0; i < 3; i++) {
		cout << "¹" << i + 1 << ": ";
		cin >> arr[i];
	}

	for (int i = 0; i < 3; i++) {
		cout << "¹" << i + 1 << ": " << arr[i] << endl;
	}
	cout << "The average: " << (arr[0] + arr[1] + arr[2]) / 3;
	
  	cin.get();
}
	
