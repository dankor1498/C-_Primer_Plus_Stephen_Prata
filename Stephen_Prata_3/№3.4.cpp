#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	long long sec;
	const int s = 60;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	long sec1 = sec;
	long days = sec / (s*s*24);
	sec -= (days * 24 * s * s);
	long hours = sec / (s*s);
	sec -= (hours*s*s);
	long minutes = sec / s;
	sec -= minutes*s;
	cout << sec1 << " seconds = " << days << " days, " << hours << " hours, " 
		<< minutes << " minutes, " << sec << " seconds.\n";
		
  	cin.get();
}
	
