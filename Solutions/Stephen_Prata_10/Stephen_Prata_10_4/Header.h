#pragma once
#include <iostream>

#ifndef SALES_H_INCLUDED
namespace SALES {

	const int QUARTERS = 4;

	class Sales
	{
	public:
		Sales();
		Sales(const double ar[], int n);
		void setSales(Sales & s);
		void showSales() const;
		~Sales();

	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;	
	};
}
#endif SALES_H_INCLUDED
