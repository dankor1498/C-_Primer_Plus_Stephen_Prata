#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	cout << "Enter a latitude in degrees, minutes, and seconds: \n";
	double degrees, minutes, seconds;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " 
		<< (seconds/60 + minutes)/60 + degrees << endl;
		
  	cin.get();
}
	
