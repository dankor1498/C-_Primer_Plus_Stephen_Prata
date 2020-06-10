#pragma once
#ifndef CD_H
#define CD_H
#include <iostream>
#include <cstring>

class Cd {                               
private:
	char performers[50];
	char label[20];
	int selections;                       
	double playtime;                      
public:
	Cd(const char * si, const char * s2, int n, double x);
	Cd();
	virtual ~Cd();
	virtual void Report() const;                  

#endif
