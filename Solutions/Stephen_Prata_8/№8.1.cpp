#include <Windows.h>
#include <iostream>

using namespace std;

int counter = 0;
void print_hi(const char* str, int n = 0 );

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	const char *str = "Hi!!!";
	print_hi(str); 
	print_hi(str);
	print_hi(str);
	cout << endl;
	print_hi(str, 5);
	
  	cin.get();
}

void print_hi(const char *str, int n ) {  
	if (n != 0) {
		for (int i = 0; i < counter; i++) {
			cout << str << endl;
		}
	}
	else 
		cout << str << endl;
	counter++;
}

