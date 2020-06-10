#pragma once

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Plorg
{
	char name[20];
	int contentment_index;
public:
	Plorg();
	Plorg(const char* _name, int ci);
	void name_plorg(Plorg & s);
	bool index_ci(int _ci, char o);
	void show_plorg() const;
	~Plorg();
};

