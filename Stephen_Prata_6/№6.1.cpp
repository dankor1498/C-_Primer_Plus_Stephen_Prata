#include <Windows.h>
#include <iostream>
#include <cctype>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	char ch;
	cin.get(ch);
	while (ch != '@') {
		if (isdigit(ch)) {
			continue;
		}
		else if (isupper(ch)) {
			cout << char(tolower(ch));
		}
		else if (islower(ch)) {
			cout << char(toupper(ch));
		}
		else {
			cout << ch;
		}
		cin.get(ch);
	}
	
  	cin.get();
}
	
