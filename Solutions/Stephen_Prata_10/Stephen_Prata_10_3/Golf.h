#pragma once

#include <iostream>

const int len = 4;
const int Len = 40;

class Golf
{
public:
	Golf();
	Golf(const char * name, int hc = 0);
	~Golf();
	Golf & setgolf();
	void hhandicap(int hc);
	void showgolf() const;
	int sravnenie(Golf & s);
private:
	char fullname[Len];
	int handicap;
};


