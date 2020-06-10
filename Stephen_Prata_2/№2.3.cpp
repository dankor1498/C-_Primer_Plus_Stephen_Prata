#include <Windows.h>
#include <iostream>

using namespace std;

void f1(){
	cout << "Three blind mice" << endl;
}

void f2(){
	cout << "See how they run" << endl;
}

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	f1(); f1();
 	f2(); f2();
  	cin.get();
}
	
