#include "pch.h"
#include "exc_mean.h"

const char* MyError::what()
{
	cout << "Arg_1 = " << v1 << endl << "Arg_2 = " << v2 << endl;
	return std::logic_error::what();
}

MyError::~MyError()
{
}

const char * bad_hmean::what()
{
	cout << "invalid arguments: a = -b\n";
	return MyError::what();
}

const char * bad_gmean::what()
{
	cout << "arguments should be >= 0\n";
	return MyError::what();
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean("hmean() error", a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean("gmean() error", a, b);
	return std::sqrt(a * b);
}