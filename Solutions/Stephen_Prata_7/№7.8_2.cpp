#include <Windows.h>
#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] =
{ "Spring", "Summer", "Fall", "Winter" };

struct Expenses
{
	double expenses[4];
};

void fill(Expenses *pa);
void show(Expenses da);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	Expenses exp;
	fill(&exp);
	show(exp);

  	std::cin.get();
}

void fill(Expenses *pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << "Enter " << Snames[i] << " expenses: ";
		std::cin >> pa->expenses[i];
	}
}

void show(Expenses da)
{
	double total = 0.0;
	std::cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Snames[i] << ": $" << da.expenses[i] << '\n';
		total += da.expenses[i];
	}
	std::cout << "Total: $" << total << '\n';
}
