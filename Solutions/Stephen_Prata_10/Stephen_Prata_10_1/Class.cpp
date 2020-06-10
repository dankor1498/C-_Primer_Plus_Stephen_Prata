#include "stdafx.h"
#include "Class.h"

Bank::Bank()
{
	name = "no_name";
	number = "no_number";
	balans = 0.0;
}

Bank::~Bank()
{
}

Bank::Bank(const string & _name, const string & _number, double _balans) {
	name = _name;
	number = _number;
	if (_balans < 0.0) {
		std::cout << "ERROR:Balans < 0..." << std::endl;
	}
	else
		balans = _balans;
}

void Bank::display() const{
	using std::cout;
	using std::ios_base;
	// Установка формата в #.###
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Name: " << name
		<< ". Number: " << number << '\n';
	cout << " Balans: $" << balans << std::endl;
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}

void Bank::plus_balans(double gold) {
	balans += gold;
}

void Bank::minus_balans(double gold) {
	balans -= gold;
}