#include <Windows.h>
#include <iostream>
#include <cstdio>

using namespace std;

typedef struct CandyBar {
	char name[25];
	double weight;
	int kalor;
}CB;

void define_CB(CB &, const char * n = "Millennium Munch", double w = 245.85, int k = 350);
void print_CB(const CB &);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	CB candies;
	define_CB(candies, "Chocolate", 745.25, 458);
	print_CB(candies);
	
	CB candies_2;
	define_CB(candies_2);
	print_CB(candies_2);
		
  	cin.get();
}

void define_CB(CB & cb, const char * n, double w, int k) {
	strcpy_s(cb.name, n);
	cb.weight = w;
	cb.kalor = k;
}

void print_CB(const CB & cb) {
	cout << cb.name << endl << cb.weight << endl << cb.kalor << endl;
}
