#pragma once
#ifndef CLASSIC_H
#define CLASSIC_H
#include "Cd.h"

class Classic : public Cd
{
	char basic_work[20];
public:
	Classic();
	Classic(const char * si, const char * s2, const char * bw, int n, double x );
	Classic(Cd & cd, const char * bw);
	~Classic();
	void Report() const;
};

#endif


