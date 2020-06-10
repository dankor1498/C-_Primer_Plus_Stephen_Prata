#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
	int n;
	cout << "¬ведите количество строк: ";
	cin >> n;
	int *mas = new int[n];

	for (int i = 0; i < n; i++) {
		*(mas + i) = int('.');
	}
	int k = n - 1;
	for (int i = 0; i < n; i++) {
		*(mas + k) = '*';
		for (int j = 0; j < n; j++) {
			cout << char(*(mas + j));
		}
		k--;
		cout << endl;
  	}
	    	
	cin.get();
    return 0;
}

/*	int n;
	ofstream outFile;
	outFile.open("jolka.txt");
	cout << "Radky: ";
	cin >> n;
	int *mas = new int[n * 2];

	for (int i = 0; i < n * 2; i++) {
		*(mas + i) = int('*');
	}
	int k = n - 1, m = n;

	for (int i = 0; i < n * 2; i++) {
		*(mas + k) = '/';
		*(mas + m) = '\\';
		for (int j = 0; j < n * 2; j++) {
			cout << char(*(mas + j));
			outFile << char(*(mas + j));
		}
		if (k == 0) {
			break;
		}
		k--; m++;
		cout << endl;
		outFile << endl;
	}
	cout << endl << endl;
*/	
