#include <Windows.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	char name[30], last_name[30];
	cout << "Enter your first name: ";
	gets(name);
	cout << "Enter your last name: ";
	gets(last_name);
	cout << "Here's the information in a single string: " << last_name << ", " << name;
	
  	cin.get();
}
	
