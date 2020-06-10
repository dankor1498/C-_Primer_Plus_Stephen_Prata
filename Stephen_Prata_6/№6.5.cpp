#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double tvarp;
	cout << "Enter salary: \n";
	while (cin >> tvarp) {
		double nalog = 0.0;
		if (tvarp < 0) {
			break;
		}
		else if (tvarp <= 5000) {
			cout << "Tax amount - 0.0 tv.\n";
		}
		else if (tvarp > 5000 && tvarp <= 15000) {
			cout << "Tax amount - "<< ( tvarp - 5000 ) * 0.1 <<" tv.\n";
		}
		else if (tvarp > 15000 && tvarp <= 35000) {
			tvarp -= 5000;
			tvarp -= 10000;
			cout << "Tax amount - " << (10000*0.1) + (tvarp*0.15) << " tv.\n";
		}
		else if (tvarp > 35000) {
			tvarp -= 5000;
			tvarp -= 10000;
			tvarp -= 20000;
			cout << "Tax amount - " << (10000 * 0.1) + (20000 * 0.15) + (tvarp*0.2) << " tv.\n";
		}
	}
	cout << "Bye.";
	
  	cin.get();
}
	
