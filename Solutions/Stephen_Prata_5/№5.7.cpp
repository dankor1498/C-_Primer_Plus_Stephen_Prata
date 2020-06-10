#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
int n;
	cout << "Сколько автомобилей поместить в каталог? ";
	cin >> n;
	struct automo {
		string name;
		int year;
	} *mas = new automo[n];
	for (int i = 0; i < n; i++) {
		cout << "Автомобиль #" << i + 1 << endl << "Введите производителя: " ;
		cin.get();
		getline (cin, (mas + i)->name);
		cout << "Укажите год выпуска: ";
		cin >> (mas + i)->year;
	}
	cout << "Вот ваша коллекция: \n";
	for (int i = 0; i < n; i++) {
		cout << (mas + i)->year << endl;
		cout << (mas + i)->name << endl;
	}
  	
	cin.get();
    return 0;
}
	
