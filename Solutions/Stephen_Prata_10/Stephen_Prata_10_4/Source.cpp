#include "stdafx.h"
#include "Header.h"


namespace SALES {

	Sales::Sales() {
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0.0;
		average = 0.0;
		max = 0.0;
		min = 0.0;
	}

	Sales::Sales(const double ar[], int n) {
		min = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] < min)
				min = ar[i];
		}
		max = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] > max)
				max = ar[i];
		}
		double sum = 0.0;
		for (int i = 0; i < n; i++) {
			sum += ar[i];
		}
		average = sum / n;
		for (int i = 0; i < n; i++) {
			sales[i] = ar[i];
		}
	}

	void Sales::setSales(Sales & s) {
		double ssales[QUARTERS]; //static???
		for (int i = 0; i < QUARTERS; i++) {
			std::cin >> ssales[i];
		}
		s = Sales(ssales, QUARTERS);
	}

	void Sales::showSales() const {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << sales[i] << std::endl;
		}
		std::cout << "Min: " << min << "   ";
		std::cout << "Max: " << max << "   ";
		std::cout << "Average: " << average << std::endl;
	}

	Sales::~Sales()
	{

	}
	
}

