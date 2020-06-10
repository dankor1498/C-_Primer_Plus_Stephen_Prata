#include <Windows.h>
#include <iostream>
#include <cctype>

using namespace std;

void convert(string &);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	string str, end = "q";
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while ( str != end ) {
		convert(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}
	cout << "Bye.";
		
  	cin.get();
}

void convert(string & str) { 
	int i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
}

