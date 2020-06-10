#include <Windows.h>
#include <iostream>
#include <fstream> 

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	ifstream inFile;
	inFile.open("Text.txt");

	if (!inFile.is_open()) 
	{
		cout << "Не удалось открыть файл " << "\"Text.txt\"" << endl;
		cout << "Програма прервана.\n";
		exit(EXIT_FAILURE);
	}

	int n;
	inFile >> n;
	struct pog {
		string name;
		double suma;
	} *mas = new pog[n];
	
	for (int i = 0; i < n; i++) {
		inFile.get();
		getline(inFile, ((mas + i)->name));
		inFile >> (mas + i)->suma;
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
	
