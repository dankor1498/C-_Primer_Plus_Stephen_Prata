#include "pch.h"
#include "classic.h"


Classic::Classic() : Cd()
{
	basic_work = new char[1];
	strcpy_s(basic_work, 1, "\0");
}

Classic::Classic(const char * si, const char * s2, const char * bw, int n, double x) : Cd(si, s2, n, x)
{
	basic_work = new char[strlen(bw) + 1];
	strcpy_s(basic_work, strlen(bw) + 1, bw);
}

Classic::Classic(Cd & cd, const char * bw) : Cd(cd)
{
	basic_work = new char[strlen(bw) + 1];
	strcpy_s(basic_work, strlen(bw) + 1, bw);
}

void Classic::Report() const {
	Cd::Report();
	std::cout << "Basic work: " << basic_work << std::endl;
}

Classic::Classic(const Classic & c) : Cd(c)
{
	basic_work = new char[strlen(c.basic_work) + 1];
	strcpy_s(basic_work, strlen(c.basic_work + 1), c.basic_work);
}

Classic & Classic::operator=(const Classic & c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c); 
	delete[] basic_work;
	basic_work = new char[strlen(c.basic_work) + 1];
	strcpy_s(basic_work, strlen(c.basic_work) + 1, c.basic_work);
	return *this;
}

Classic::~Classic()
{
	delete[] basic_work;
}
