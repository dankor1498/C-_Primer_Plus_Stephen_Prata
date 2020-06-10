#include <Windows.h>
#include <iostream>

using namespace std;

template <typename T> 
T ShowArray(T arr[], int n);

template <typename T> 
T ShowArray(T **arr, int n);

struct debts
{
	char name[50];
	double amount;
};


int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double * pd[3];
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's counts of things: \n";
	cout << ShowArray(things, 6) << endl;
	cout << "Listing Mr. E's debts: \n";
	cout << ShowArray(pd, 3);
		
  	cin.get();
}

template <typename T>
T ShowArray(T arr[], int n)
{
	T sum = 0;
	cout << "Template A\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
		sum += arr[i];
	}
	cout << endl;
	cout << n << endl;
	return sum;
}

template <typename T>
T ShowArray(T ** arr, int n)
{
	T sum = 0;
	cout << "Template B\n";
	for (int i = 0; i < n; i++) {
		cout << *arr[i] << ' ';
		sum += *arr[i];
	}
	cout << endl;
	cout << n << endl;
	return sum;
}

