#include <Windows.h>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

struct stringy {
	char * str;
	int ct;
};

void set(stringy &, const char[]);
void show(const stringy &, int n = 1);
void show(const char *, int n = 1);


int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany); 
	show(beany, 2); 
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
		
  	cin.get();
}

void show(const stringy & structa, int n) { 
	for (int i = 0; i < n; i++) {
		cout << structa.str << endl;
	}
}

void show(const char * str , int n) {
	for (int i = 0; i < n; i++) {
		cout << str << endl;
	}
}

void set(stringy & structi, const char strr[] ) {
	structi.ct = strlen(strr);
	structi.str = new char[structi.ct + 1];
	strcpy_s(structi.str,(structi.ct + 1), strr);
}

