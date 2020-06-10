#pragma once
#ifndef CD_H
#define CD_H
#include <iostream>
#include <cstring>

class Cd {                                // представляет компакт-диск
private:
	char *performers;
	char *label;
	int selections;                       // количество сборников
	double playtime;                      // время воспроизведения в минутах
public:
	Cd(const char * si, const char * s2, int n, double x);
	Cd();
	Cd(const Cd & d);
	virtual Cd & operator=(const Cd & d);	virtual ~Cd();
	virtual void Report() const;                  // выводит все данные о компакт-диске
};

#endif
