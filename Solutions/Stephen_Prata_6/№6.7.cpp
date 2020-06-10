#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int glas = 0, priglas = 0, drug = 0;
	bool flag = true;
	char ch;
	cout << "Enter words (q to quit): \n";
	while (cin.get(ch)) {
		if (ch == ' ') {
			cin.get(ch);
			if (ch == 'q') {
				cout << "End...";
				break;
			}
			flag = true;
		}

		else if (isspace(ch)) {
			flag = true;
			continue;
		}

		if ((!isalpha(ch)) && flag == true) {
				drug++;
				flag = false;
			}

		else if (flag == true) {
			if (ch == 'a' || ch == 'o' || ch == 'u' || ch == 'e' || ch == 'i' || ch == 'y') {
				glas++;
				flag = false;
			}
			else {
				priglas++;
				flag = false;
			}
		}
	}
	
	cout << endl << glas << " words beginning with vowels\n"
		<< priglas << " words beginning with consonants\n"
		<< drug << " others";
	
  	cin.get();
}
	
