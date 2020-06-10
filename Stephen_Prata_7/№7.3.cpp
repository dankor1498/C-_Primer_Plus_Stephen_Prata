#include <Windows.h>
#include <iostream>

using namespace std;

struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void Vidobrag(const box * ps);
void Volume(box * ps);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	box a = { "Vasya Ivanov", 10.1, 15.2, 458.1, 140.01 };
	Vidobrag(&a);
	Volume(&a);
	cout << endl << endl;
	Vidobrag(&a);
	
  	cin.get();
}

void Vidobrag(const box * ps) {   
	cout << ps->maker << endl << ps->height << endl 
		<< ps->width << endl << ps->length << endl << ps->volume;
}

void Volume(box * ps) {
	ps->volume = ps->length + ps->height + ps->width;
}

