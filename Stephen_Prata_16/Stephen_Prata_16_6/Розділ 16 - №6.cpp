// Розділ 16 - №6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "queue.h"

using namespace std;

const int MIN_PER_HR = 60;
bool newcustomer(double x); 

int main()
{
	std::srand(std::time(0));    

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs;
	queue<Item> line;         
	int iter = 0;

	cout << "Enter the number of simulation hours: ";
	int hours;              
	cin >> hours;
	
	long cyclelimit = MIN_PER_HR * hours; 

	cout << "Enter the average number of customers per hour: ";
	double perhour;         
	cin >> perhour;
	double min_per_cust;    
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;             
	long turnaways = 0;     
	long customers = 0;     
	long served = 0;       
	long sum_line = 0;      
	int wait_time = 0;     
	long line_wait = 0;    
	   						
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))  
		{
			if (iter == qs)
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);  
				line.push(temp); 
				iter++;
			}
		}
		if (wait_time <= 0 && !line.empty())
		{
			line.pop();     
			iter--;
			wait_time = temp.ptime(); 
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += iter;
	}

	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: "
			<< (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	cin.get();
	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}
