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
	William_Wingate p;
	
	cout << "Name: ";
	cin >> p.name;
	cout << "Diameter: ";
	cin >> p.diametr;
	cout << "Weight: ";
	cin >> p.ves;
	
	cout << endl << "Name: " << p.name << endl;
	cout << "Diameter: " << p.diametr << endl;
	cout << "Weight: " << p.ves << endl;
	
  	cin.get();
}
	
