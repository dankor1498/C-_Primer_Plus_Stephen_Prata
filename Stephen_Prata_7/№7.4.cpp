#include <Windows.h>
#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double total, choices;
	cout << "Укажите общее количество номеров и\n"
		"количество номеров, которые нужно угадать: \n";
	while ((cin >> total >> choices) && choices <= total) {
		cout << "У вас один шанс из ";
		cout << probability(total, choices);
		cout << " чтобы выиграть.\n";
		cout << "Следующие два числа (q для выхода): ";
	}
	cout << "Удачи!\n";
	
  	cin.get();
}

long double probability(unsigned numbers, unsigned picks) {  
	long double result = 1.0; 
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	result *= (int(numbers) / 2);
	return result;
}
