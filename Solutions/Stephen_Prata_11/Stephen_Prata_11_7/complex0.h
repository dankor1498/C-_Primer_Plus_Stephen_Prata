#pragma once
#include <iostream>
using namespace std;

#ifndef COMPLEX_H_
#define COMPLEX_H_

class complex
{
	int vesch;
	int mnim;
public:
	complex();
	complex(int _vesch, int _mnim);

	complex operator~() const { return complex(vesch, -mnim); };
	complex operator+(const complex & c) const { return complex(c.vesch + vesch, c.mnim + mnim); };
	complex operator-(const complex & c) const { return complex(-c.vesch + vesch, -c.mnim + mnim); };
	complex operator*(const complex & c) const { return complex((c.vesch * vesch) - (c.mnim * mnim), 
		(vesch * c.mnim) + (mnim * c.vesch)); };
	complex operator*(int n) const { return complex(vesch * n, mnim * n); };

	friend complex operator*(int n, const complex & c);
	friend ostream & operator<<(ostream & os, const complex & c);
	friend istream & operator>>(istream & is, complex & c);
	~complex();
};

#endif


