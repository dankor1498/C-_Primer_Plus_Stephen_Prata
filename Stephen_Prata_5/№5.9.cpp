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
	cout << "������� ����� (��� ���������� ������� ����� done):\n";
	cin >> str;
	while (str != "done") {
		++i;
		cin >> str;
	}
	cout << "�� ����� " << i << " ����.";
  	
	cin.get();
    return 0;
}
	
