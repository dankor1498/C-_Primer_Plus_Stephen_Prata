#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	char name[30], last_name[5], abc;
	cout << "What is your first name? " ;
	cin.getline(name, 30);
	cout << "What is your last name? ";
	cin.getline(last_name, 5);
	cout << "What letter grade do you deserve? ";
	cin >> abc;
	abc += 1;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << name << ", " << last_name << endl << "Grade: " << abc << endl << "Age: " << age;
	
  	cin.get();
}
	
