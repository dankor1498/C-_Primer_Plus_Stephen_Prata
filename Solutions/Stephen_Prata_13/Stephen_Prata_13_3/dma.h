#pragma once
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class ABC_BaseDMA //абстрактный базовый	клас
{
public:
	ABC_BaseDMA(const char * l = "null", int r = 0);
	virtual ~ABC_BaseDMA();
	ABC_BaseDMA(const ABC_BaseDMA & ars);
	ABC_BaseDMA & operator=(const ABC_BaseDMA & ars);
	virtual void View() = 0;
protected:
	const char* return_label()const { return label; };
	int return_rating()const { return rating; };
private:
	char * label;
	int rating;
};

class baseDMA : public ABC_BaseDMA
{
public:
	baseDMA(const char * l = "null", int r = 0) : ABC_BaseDMA(l, r) {};
	~baseDMA() {};
	baseDMA(const baseDMA & bs) : ABC_BaseDMA(bs) {};
	baseDMA & operator=(const baseDMA & bs);
	virtual void View();
};

class lacksDMA :public ABC_BaseDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank", const char * l = "null",	int r = 0);
	lacksDMA(const lacksDMA & ls);
	lacksDMA & operator=(const lacksDMA & ls);
	virtual void View();
};

class hasDMA : public ABC_BaseDMA
{
private:
	char * style;
public:
	hasDMA(const char * s = "none", const char * l = "null", int r = 0);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	virtual void View();
};

#endif
