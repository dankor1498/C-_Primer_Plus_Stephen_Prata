#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
  	int time, minute;
	cout << "Enter the number of hours: ";
	cin >> time;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	cout << "Time: " << time << ":" << minute << endl;
	
	cin.get();
}
	
