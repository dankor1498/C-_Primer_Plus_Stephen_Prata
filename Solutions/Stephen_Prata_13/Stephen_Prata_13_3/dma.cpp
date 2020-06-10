#include "pch.h"
#include "dma.h"

#include <cstring>

ABC_BaseDMA::ABC_BaseDMA(const char * l, int r) {
	label = new char[strlen(l) + 1];
	strcpy_s(label, strlen(l) + 1, l);
	rating = r;
}

ABC_BaseDMA::~ABC_BaseDMA() {
	delete[] label;
}

ABC_BaseDMA::ABC_BaseDMA(const ABC_BaseDMA & ars)
{
	label = new char[strlen(ars.label) + 1];
	strcpy_s(label, strlen(ars.label) + 1, ars.label);
	rating = ars.rating;
}

ABC_BaseDMA & ABC_BaseDMA::operator=(const ABC_BaseDMA & ars)
{
	if (this == &ars)
		return *this;
	delete[] label;
	label = new char[strlen(ars.label) + 1];
	strcpy_s(label, strlen(ars.label) + 1, ars.label);
	rating = ars.rating;
	return *this;
}

// baseDMA methods
void baseDMA::View()
{
	std::cout << "Label: " << ABC_BaseDMA::return_label() << std::endl;
	std::cout << "Rating: " << ABC_BaseDMA::return_rating() << std::endl;
}

baseDMA & baseDMA::operator=(const baseDMA & bs) {
	if (this == &bs)
		return *this;
	ABC_BaseDMA::operator=(bs);
}


// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : ABC_BaseDMA(l, r)
{
	strncpy_s(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA & ls) : ABC_BaseDMA(ls)
{
	strncpy_s(color, ls.color, 39);
	color[39] = '\0';
}

lacksDMA & lacksDMA::operator=(const lacksDMA & ls)
{
	if (this == &ls)
		return *this;
	ABC_BaseDMA::operator=(ls);  // copy base portion
	strncpy_s(color, ls.color, 39);
	color[39] = '\0';
	return *this;
}

void lacksDMA::View()
{
	std::cout << "Label: " << ABC_BaseDMA::return_label() << std::endl;
	std::cout << "Rating: " << ABC_BaseDMA::return_rating() << std::endl;
	std::cout << "Color: " << color << std::endl;
}


// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : ABC_BaseDMA(l, r)
{
	style = new char[strlen(s) + 1];
	strcpy_s(style, strlen(s) + 1, s);
}

hasDMA::hasDMA(const hasDMA & hs) : ABC_BaseDMA(hs)  // invoke base class copy constructor
{
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
	if (this == &hs)
		return *this;
	ABC_BaseDMA::operator=(hs);  // copy base portion
	delete[] style;         // prepare for new style
	style = new char[strlen(hs.style) + 1];
	strcpy_s(style, strlen(hs.style) + 1, hs.style);
	return *this;
}

void hasDMA::View()
{
	std::cout << "Label: " << ABC_BaseDMA::return_label() << std::endl;
	std::cout << "Rating: " << ABC_BaseDMA::return_rating() << std::endl;
	std::cout << "Style: " << style << std::endl;
}
