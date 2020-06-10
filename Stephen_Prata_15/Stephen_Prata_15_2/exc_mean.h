#pragma once
#include <iostream>
#include <stdexcept>
#include <cmath>

class bad_hmean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(const char *what, double a = 0, double b = 0) : v1(a), v2(b), logic_error(what) {}
	const char * what();  
};

const char * bad_hmean::what()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "invalid arguments: a = -b\n";
	return logic_error::what();
}

class bad_gmean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_gmean(const char *what, double a = 0, double b = 0) : v1(a), v2(b), logic_error(what) {}
	const char * what();
};

const char * bad_gmean::what()
{
	std::cout << "Values used: " << v1 << ", "
		<< v2 << std::endl;
	std::cout << "Sorry, you don't get to play any more.\n";
	return logic_error::what();
}