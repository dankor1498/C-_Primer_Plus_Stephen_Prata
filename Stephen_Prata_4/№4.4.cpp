#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	string name, last_name;
	cout << "Enter your first name: ";
	cin >> name;
	cout << "Enter your last name: ";
	cin >> last_name ;
	cout << "Here's the information in a single string: " << name << ", " << last_name;
	
  	cin.get();
}
	
