#include "pch.h"
#include "wine.h"

Wine::Wine() : string("\0"), year(0) 
{
	PairArray().PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : string(l), year(y), 
	PairArray(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char * l, int y) : string(l), year(y), 
	PairArray(ArrayInt(y), ArrayInt(y))
{
}

void Wine::GetBottles()
{
	std::cout << "Enter " << (const string &)(*this) << " data for " << year << " year(s): \n";
	int y, k;
	for (int i = 0; i < year; i++) {
		std::cout << "Enter year: ";
		std::cin >> PairArray::first()[i];
		PairArray::first()[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> PairArray::second()[i];
	}
}

string Wine::Label() const
{
	return (const string &)(*this);
}

int Wine::sum() const
{
	return (PairArray::second()).sum();
}

void Wine::Show() const
{
	std::cout << "Wine: " << (const string &)(*this) << std::endl;
	std::cout << "\tYear\t" << "Bottles\n";
	for (int i = 0; i < year; i++) {
		std::cout << "\t";
		std::cout << PairArray::first()[i];
		std::cout << "\t";
		std::cout << PairArray::second()[i] << std::endl;
	}
}

Wine::~Wine()
{

}
