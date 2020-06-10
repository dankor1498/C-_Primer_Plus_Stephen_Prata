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
	CandyBar *snack = new CandyBar[3];
	 
	snack[0] = {"Millenium0", 13.12 , 400};
	snack[1] = {"Millenium1", 85.20 , 250};
	snack[2] = {"Millenium2", 80.11 , 550};
	
	for(int i = 0; i<3; i++)
		cout << endl << snack[i].name << endl << snack[i].ves << endl << snack[i].kkal << endl;
	delete[] snack;
	
  	cin.get();
}
	
