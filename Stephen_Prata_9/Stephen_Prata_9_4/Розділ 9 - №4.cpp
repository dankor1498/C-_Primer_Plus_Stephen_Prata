// Розділ 9 - №4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "NameFunck.h"



int main()
{
	double ar[] = { 11111.1, 22222.2, 33333.3, 44444.4 };
	SALES::Sales van;
	SALES::setSales(van, ar, SALES::QUARTERS);
	SALES::showSales(van);
	
	
	SALES::Sales tuu;
	SALES::setSales(tuu);
	SALES::showSales(tuu);
		
	return 0;
}

