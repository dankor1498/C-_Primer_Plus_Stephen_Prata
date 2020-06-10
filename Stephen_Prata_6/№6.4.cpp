#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	char vybir;
	struct bop {
		string fullname;
		string title;
		string bopname;
		int preference;
	} mas[5] = { { "Wimp Macho", "Junior0", "MIPS", 0},
				{ "Raki Rhodes", "Junior1", "MIPSS", 1 },
				{ "Celia Laiter", "Junior2", "MIPSSS", 2 },
				{ "Hoppy Hipman", "Junior3", "MIPSSSS", 0 },
				{ "Pat Hand", "Junior4", "MIPSSSSS", 1 } };
	cout << "Benevolent Order of Programmers Report\n"
		 << "a. display by name b. display by titl\n"
		 <<	"c. display by bopname d. display by preference\n"
		 <<	"q. quit\n";
	while (cin >> vybir) {
		if (vybir != 'a' && vybir != 'b' && vybir != 'c' && vybir != 'd' && vybir != 'q') {
			cin.clear();
			cout << "Please enter a, b, c, d or q: ";
			continue;
		}
		else if (vybir == 'q') {
			cout << "Bye!";
			break;
		}
		else if (vybir == 'a') {
			for (int i = 0; i < 5; i++) {
				cout << mas[i].fullname << endl;
			}
		}
		else if (vybir == 'b') {
			for (int i = 0; i < 5; i++) {
				cout << mas[i].title << endl;
			}
		}
		else if (vybir == 'c') {
			for (int i = 0; i < 5; i++) {
				cout << mas[i].bopname << endl;
			}
		}
		else if (vybir == 'd') {
			for (int i = 0; i < 5; i++) {
				switch (mas[i].preference)
				{
				case 0: cout << mas[i].fullname << endl; break;
				case 1: cout << mas[i].title << endl; break;
				case 2: cout << mas[i].bopname << endl; break;
				default:
					break;
				}
			}
		}
	}
	
  	cin.get();
}
	
