// stonewt.cpp -- Stonewt methods
#include "stdafx.h"
#include "stonewt.h"


using std::cout;


// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode _mode)
{
	mode = _mode;
	if (_mode == INT_F) {
		stone = int(lbs) / Lbs_per_stn;    // integer division
		pds_left = int(lbs) % Lbs_per_stn;
		pounds = lbs;
	}
	else if (_mode == DOUBLE_F) {
		stone = int(lbs) / Lbs_per_stn;    // integer division
		pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
		pounds = lbs;
	}
	else {
		stone = 0;
		pounds = pds_left = 0.0;
		mode = ST;
		cout << "Error!!!" << std::endl;
	}
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode _mode)
{
	mode = _mode;
	if (_mode == ST) {
		stone = stn;
		pds_left = lbs;
		pounds = stn * Lbs_per_stn + lbs;
	}
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
	mode = ST;
}

Stonewt::~Stonewt()         // destructor
{
}

std::ostream & operator<< (std::ostream & os, const Stonewt & v)
{
	os <<"|"<< v.stone << " stone, " << v.pds_left << " pounds| = " << v.pounds << " Suma pounds\n";
	return os;
}

Stonewt Stonewt::operator+(const Stonewt & b) const {
	Stonewt suma;
	suma.stone = this->stone + b.stone;
	suma.pds_left = this->pds_left + b.pds_left;
	suma.pounds = this->pounds + b.pounds;
	return suma;
}

Stonewt Stonewt::operator-(const Stonewt & b) const {
	if (this->pounds >= b.pounds) {
		double m_stone = this->pounds - b.pounds;
		return Stonewt(m_stone, DOUBLE_F);
	}
	else {
		cout << "Error: a - b, a < b !!! Result: b - a:\n";
		double m_stone = (- this->pounds + b.pounds);
		return Stonewt(m_stone, DOUBLE_F);
	}
}

Stonewt Stonewt::operator*(const Stonewt & b) const {
	Stonewt umnog;
	umnog.stone = this->stone * b.stone;
	umnog.pds_left = this->pds_left * b.pds_left;
	umnog.pounds = this->pounds * b.pounds;
	return umnog;
}