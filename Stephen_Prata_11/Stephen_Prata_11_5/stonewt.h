#pragma once
#include <iostream>

#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
	enum Mode { ST, INT_F, DOUBLE_F };
private:
	enum { Lbs_per_stn = 14 };      // pounds per stone
	int stone;                    // whole stones
	double pds_left;              // fractional pounds
	double pounds;                // entire weight in pounds
	Mode mode;
public:
	Stonewt(double lbs, Mode _mode );          
	Stonewt(int stn, double lbs, Mode _mode);
	Stonewt();                    // default constructor
	~Stonewt();

	Stonewt operator+(const Stonewt & b) const;
	Stonewt operator-(const Stonewt & b) const;
	Stonewt operator*(const Stonewt & b) const;
	
	// friends
	friend std::ostream & operator<<(std::ostream & os, const Stonewt & v);

};
#endif