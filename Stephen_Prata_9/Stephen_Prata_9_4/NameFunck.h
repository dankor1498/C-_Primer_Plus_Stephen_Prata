#pragma once

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <cctype>

#ifndef SALES_H_INCLUDED
namespace SALES {

	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS] = { 0.0,0.0,0.0,0.0 };
		double average;
		double max;
		double min;
	};
	
	void setSales(Sales & s, const double ar[], int n);
	
	void setSales(Sales & s);
	
	void showSales(const Sales & s);
}
#endif SALES_H_INCLUDED