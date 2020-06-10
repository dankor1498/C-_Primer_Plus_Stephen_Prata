#include "stdafx.h"
#include "NameFunck.h"

namespace SALES {

	void setSales(Sales & s, const double ar[], int n) {
		s.min = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] < s.min)
				s.min = ar[i];
		}
		s.max = ar[0];
		for (int i = 0; i < n; i++) {
			if (ar[i] > s.max)
				s.max = ar[i];
		}
		double sum = 0.0;
		for (int i = 0; i < n; i++) {
			sum += ar[i];
		}
		s.average = sum / n;
		
		for (int i = 0; i < n; i++) {
			s.sales[i] = ar[i];
		}
	}

	void setSales(Sales & s) {
		for (int i = 0; i < QUARTERS; i++) {
			std::cin >> s.sales[i];
		}
		s.min = s.sales[0];
		for (int i = 0; i < QUARTERS; i++) {
			if (s.sales[i] < s.min)
				s.min = s.sales[i];
		}
		s.max = s.sales[0];
		for (int i = 0; i < QUARTERS; i++) {
			if (s.sales[i] > s.max)
				s.max = s.sales[i];
		}
		double sum = 0;
		for (int i = 0; i < QUARTERS; i++) {
			sum += s.sales[i];
		}
		s.average = sum / QUARTERS;
	}

	void showSales(const Sales & s) {
		for (int i = 0; i < QUARTERS; i++) {
			std::cout << s.sales[i] << std::endl;
		}
		std::cout <<"Min: " << s.max << "   ";
		std::cout <<"Max: " << s.min << "   ";
		std::cout <<"Average: " << s.average << std::endl;
	}
}

