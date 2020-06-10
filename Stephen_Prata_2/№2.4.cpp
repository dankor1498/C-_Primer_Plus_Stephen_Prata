#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	int age;
  	cout << "Enter your age: ";
  	cin >> age;
  	cout << "Your age in months is " << age*12 << "." << endl;
  	cin.get();
}
	
