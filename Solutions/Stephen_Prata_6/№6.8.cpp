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
	
	char ch;
	int sec = 0;
	while (inFile >> ch) {
		sec++;
	}
		
	inFile.clear();
	inFile.seekg(0);
	while (inFile.get(ch)) {
		cout << ch;
	}
	
	cout << sec;
	
  	cin.get();
}
	
