#pragma once
#include <iostream>
#include <string>

using std::string;

class Bank
{
public:
	Bank();
	Bank(const string & _name, const string & _number, double _balans = 0.0);
	void display() const;
	void plus_balans(double gold);
	void minus_balans(double gold);
	~Bank();

private:
	string name;
	string number;
	double balans;
};


