#include <Windows.h>
#include <iostream>

using namespace std;

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	long double pop, pusa;
	cout << "Enter the world's population: ";
	cin >> pop;
	cout << "Enter the population of the US: ";
	cin >> pusa;
	cout << "The population of the US is " << (pusa*100)/pop << "% of the world population.";
	
  	cin.get();
}
	
