#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	struct William_Wingate {
		string name;
		int diametr;
		float ves;
	};
	
	int n;
	cout << "Quantity: ";
	cin >> n;
	
	William_Wingate *p = new William_Wingate[n];
	
	for (int i = 0; i < n; i++) {
		cout << "Diameter: ";
		cin >> p[i].diametr;
		cout << "Name: ";
		cin >> p[i].name;
		cout << "Weight: ";
		cin >> p[i].ves;
	}
	
	for (int i = 0; i < n; i++) {
		cout << endl << "Name: " << p[i].name << endl;
		cout << "Diameter: " << p[i].diametr << endl;
		cout << "Weight: " << p[i].ves << endl;
	}
	delete[] p;
	
  	cin.get();
}
	
