#include <Windows.h>
#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] =
	{ "Spring", "Summer", "Fall", "Winter" };

void fill(double *pa);
void show(double *da);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	double expenses[4];
	fill(expenses);
	show(expenses);

  	std::cin.get();
}

void fill(double *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa[i];
	}
}

void show(double *da)
{
	double total = 0.0;
	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << da[i] << '\n';
		total += da[i];
	}
	std::cout << "Total: $" << total << '\n';
}
