#pragma once
#ifndef CLASSIC_H
#define CLASSIC_H
#include "Cd.h"

class Classic : public Cd
{
	char * basic_work;
public:
	Classic();
	Classic(const char * si, const char * s2, const char * bw, int n, double x );
	Classic(Cd & cd, const char * bw);
	~Classic();
	Classic(const Classic & c);
	Classic & operator=(const Classic & c);
	void Report() const;
};

#endif


