#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
	string str;
	int i = 0;
	cout << "Вводите слова (для завершения введите слово done):\n";
	cin >> str;
	while (str != "done") {
		++i;
		cin >> str;
	}
	cout << "Вы ввели " << i << " слов.";
  	
	cin.get();
    return 0;
}
	
