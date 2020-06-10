#include <Windows.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
	char str[30];
	int i = 0;
	cout << "Вводите слова (для завершения введите слово done):\n";
	cin >> str;
	while (strcmp(str, "done") != 0) {
		++i;
		cin >> str;
	}
	cout << "Вы ввели " << i << " слов.";
  	
	cin.get();
    return 0;
}
	
