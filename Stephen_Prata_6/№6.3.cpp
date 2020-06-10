#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	cout << "Please enter one of the following choices:\n"
	<< "c) carnivore p) pianist\n" << "t) tree g) game\n";
	char vybir;
	for (int i = 0; i < 4; i++) {
		cin >> vybir[i];
		while (vybir[i] != 'a' && vybir[i] != 'b' && vybir[i] != 'c' && vybir[i] != 'd') {
			cin.clear();
			cout << "Please enter a c, p, t, or g: ";
			cin >> vybir[i];
		}
	}
	for (int i = 0; i < 4; i++) {
		switch (vybir[i])
		{
		case 'a': cout << "Carnivore\n"; break;
		case 'b': cout << "Pianist\n"; break;
		case 'c': cout << "Tree\n"; break;
		case 'd': cout << "Game\n"; break;
		default:
			break;
		}
	}
	
  	cin.get();
}
	
