#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	cout << "������� ���������� � ��������� - ";
	double l;
	cin >> l;
	cout << "���������� � ����� - " << l*220 << endl;
  	cin.get();
}
	
