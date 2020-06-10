#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	cout << "Введите расстояние в фарлонгах - ";
	double l;
	cin >> l;
	cout << "Расстояние в ярдах - " << l*220 << endl;
  	cin.get();
}
	
