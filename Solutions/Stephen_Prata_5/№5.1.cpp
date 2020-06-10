#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		sum += i;
	}
	cout << sum;
	
  	cin.get();
}
	
