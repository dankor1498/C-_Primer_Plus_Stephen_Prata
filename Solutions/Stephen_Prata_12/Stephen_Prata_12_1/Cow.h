#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Cow
{
	static int i;
	char name[20];
	char *hobby;
	double weight;
public:
	Cow();
	~Cow();
	Cow(const char * nm, const char * ho, double wt);
	Cow(const Cow & c);
	Cow & operator=(const Cow & c);
	void ShowCow() const; 
};

