#include "stdafx.h"
#include "complex0.h"


complex::complex()
{
	vesch = mnim = 0;
}

complex::complex(int _vesch, int _mnim) {
	vesch = _vesch;
	mnim = _mnim;
}

complex::~complex()
{
}

ostream & operator<<(ostream & os, const complex & c) {
	os << "(" << c.vesch << ", " << c.mnim << "i)";
	return os;
}

istream & operator>>(istream & is, complex & c) {
	cout << "real: ";
	is >> c.vesch;
	cout << "imaginary: ";
	is >> c.mnim;
	return is;
}

complex operator*(int n, const complex & c) 
{ 
	return c * n; 
}
