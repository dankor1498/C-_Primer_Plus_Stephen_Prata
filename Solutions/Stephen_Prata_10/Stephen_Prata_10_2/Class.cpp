#include "stdafx.h"
#include "Class.h"

#include <cstring>

Person::Person(const std::string & ln, const char * fn) {
	lname = ln;
	strcpy_s(fname, strlen(fn) + 1, fn);
}

void Person::Show() const {
	std::cout << lname << " " << fname << std::endl;
}

void Person::FormalShow() const {
	std::cout << fname << ", " << lname << std::endl;
}