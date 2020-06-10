#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	struct CandyBar {
		string name;
		float ves;
		int kkal;
	};
	CandyBar snack = {"Millenium", 85.20 , 250};
	cout << snack.name << endl << snack.ves << endl << snack.kkal;
	
  	cin.get();
}
	
