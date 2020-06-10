#include "pch.h"
#include "wine.h"

Wine::Wine()
{
	label = '\0';
	year = 0;
	Pair< valarray<int>, valarray<int> > p;
	p_array = p;
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) 
{
	label = l;
	year = y;
	valarray<int> vi_1(yr, y);
	valarray<int> vi_2(bot, y);
	Pair< valarray<int>, valarray<int> > p(vi_1, vi_2);
	p_array = p;
}

Wine::Wine(const char * l, int y)
{
	label = l;
	year = y;
	valarray<int> vi_1(y);
	Pair< valarray<int>, valarray<int> > p(vi_1, vi_1);
	p_array = p;
}

void Wine::GetBottles()
{
	std::cout << "Enter " << label << " data for " << year << " year(s): \n";
	for (int i = 0; i < year; i++) {
		std::cout << "Enter year: ";
		std::cin >> p_array.first()[i];
		std::cout << "Enter bottles for that year: ";
		std::cin >> p_array.second()[i];
	}
}

string Wine::Label() const
{
	return label;
}

int Wine::sum() const
{
	return (p_array.second()).sum();
}

void Wine::Show() const
{
	std::cout << "Wine: " << label << std::endl;
	std::cout << "\tYear\t" << "Bottles\n";
	for (int i = 0; i < year; i++) {
		std::cout << "\t";
		std::cout << p_array.first()[i];
		std::cout << "\t";
		std::cout << p_array.second()[i] << std::endl;
	}
}

Wine::~Wine()
{

}
