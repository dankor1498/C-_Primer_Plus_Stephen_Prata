#include "stdafx.h"
#include "Cow.h"

int Cow::i = 0;

Cow::Cow()
{
	strcpy_s(name, 20, "no_name");
	hobby = new char[1];
	strcpy_s(hobby, 1, "\0");
	weight = 0.0;
	i++;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
	strcpy_s(name, (strlen(nm) + 1), nm);
	hobby = new char[strlen(ho) + 1];
	strcpy_s(hobby, (strlen(ho) + 1), ho);
	weight = wt;
	i++;
}

Cow::Cow(const Cow & c) {
	strcpy_s(name, (strlen(c.name) + 1), c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, (strlen(c.hobby) + 1), c.hobby);
	weight = c.weight;
	i++;
}

Cow & Cow::operator=(const Cow & c) {
	if (this == &c)
		return *this;
	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy_s(hobby, (strlen(c.hobby) + 1), c.hobby);
	strcpy_s(name, (strlen(c.name) + 1), c.name);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const {
	cout << "Name: " << name << endl;
	cout << "Hobby: " << hobby << endl;
	cout << "Weight: " << weight << endl;
}

Cow::~Cow()
{
	--i;
	cout << "Delete #" << i << " " << name << endl;
	delete[] hobby;
}
