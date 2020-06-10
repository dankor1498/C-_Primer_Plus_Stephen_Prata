#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);
  	
  	cout << "Enter the numbers(0 - quit): ";
  	int sum = 0, i;
  	while(cin >> i && i != 0){
  		sum += i;
  		cout << "Soum: " << sum << endl;
  	}
  	
	cin.get();
    return 0;
}
	
