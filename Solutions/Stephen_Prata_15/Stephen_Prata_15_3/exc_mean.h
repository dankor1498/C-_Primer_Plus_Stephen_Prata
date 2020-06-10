#pragma once
#include <iostream>
#include <stdexcept>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double hmean(double a, double b);
double gmean(double a, double b);

class MyError : public std::logic_error
{
public:
	MyError(const char *what, double a = 0, double b = 0) : v1(a), v2(b), logic_error(what) {};
	virtual const char * what();
	~MyError() = 0;
private:
	double v1;
	double v2;
};

class bad_hmean : public MyError
{
public:
	bad_hmean(const char *what, double a = 0, double b = 0) : MyError(what, a, b) {}
	const char * what();
};

class bad_gmean : public MyError
{
public:
	bad_gmean(const char *what, double a = 0, double b = 0) : MyError(what, a, b) {}
	const char * what();
};


