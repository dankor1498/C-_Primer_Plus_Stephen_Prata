#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int n;
	cout << "N: ";
	cin >> n;
	struct pog {
		string name;
		double suma;
	} *mas = new pog[n];
	for (int i = 0; i < n; i++) {
		cin.get();
		cout << "Name: ";
		getline(cin, ((mas + i)->name));
		cout << "Suma: ";
		cin >> (mas + i)->suma;
	}
	bool flag = true;
	cout << "************* Grand Patrons *************\n";
	for (int i = 0; i < n; i++) {
		if ((mas + i)->suma >= 10000) {
			cout << (mas + i)->name << " -- " << (mas + i)->suma << endl;
			flag = false;
		}
	}
	if (flag == true) {
		cout << "none\n";
	}
	flag = true;
	cout << "**************** Patrons ****************\n";
	for (int i = 0; i < n; i++) {
		if ((mas + i)->suma < 10000) {
			cout << (mas + i)->name << " -- " << (mas + i)->suma << endl;
			flag = false;
		}
	}
	if (flag == true) {
		cout << "none\n";
	} 
	
  	cin.get();
}
	
