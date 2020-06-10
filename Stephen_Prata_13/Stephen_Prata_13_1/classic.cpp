#include "pch.h"
#include "classic.h"


Classic::Classic() : Cd()
{
	strcpy_s(basic_work, 20, "no_name");
}

Classic::Classic(const char * si, const char * s2, const char * bw, int n, double x) : Cd(si, s2, n, x)
{
	strcpy_s(basic_work, 20, bw);
}

Classic::Classic(Cd & cd, const char * bw) : Cd(cd)
{
	strcpy_s(basic_work, 20, bw);
}

void Classic::Report() const {
	Cd::Report();
	std::cout << "Basic work: " << basic_work << std::endl;
}

Classic::~Classic()
{

}
