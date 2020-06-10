#include "stdafx.h"
#include "Class.h"


Plorg::Plorg()
{
	strcpy_s(name, 7,"Plorga");
	contentment_index = 50;
}

Plorg::Plorg(const char* _name, int ci) {
	strcpy_s(name, strlen(_name)+1, _name);
	contentment_index = ci;
}

Plorg::~Plorg()
{
}

void Plorg::name_plorg(Plorg & s) {
	cin.get();
	cout << "Name: ";
	cin.getline(s.name, 20);
	cout << "CI: ";
	cin >> s.contentment_index;
}

bool Plorg::index_ci(int _ci, char o) {
	if (o == '+')
		contentment_index += _ci;
	else if (o == '-')
		contentment_index -= _ci;
	else
		return false;
}

void Plorg::show_plorg() const {
	cout << "Name: " << name << endl;
	cout << "CI: " << contentment_index << endl;
}