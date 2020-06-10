#include "stdafx.h"
#include "vect.h"

#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include <fstream> 

int main()
{
	using namespace std;
	ofstream fout;
	fout.open("thewalk.txt");
	using VECTOR::Vector;
	srand(time(0));     // seed random-number generator
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int N = 0, i = 0, j = 0, Nn;
	cout << "Enter number of attempts: ";
	cin >> N;
	Nn = N;
	int *mas = new int[N];
	while (N--) {
		cout << "Enter target distance (q to quit): ";
		cin >> target;
		fout << "Target Distance: " << target << ", Step Size: ";
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		fout << dstep << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			fout << i++ << ": " << result << endl;
		}
		cout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		fout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		cout << result << endl;
		fout << result << endl;
		result.polar_mode();
		*(mas + j) = steps;
		steps = 0;
		result.reset(0.0, 0.0);
		j++;
		i = 0;
	}
	Max_Min_Ser(mas, Nn);
	cout << "Bye!\n";
	/* keep window open
	cin.clear();
	while (cin.get() != '\n')
	continue;
	cin.get();
	*/
	return 0;
}
