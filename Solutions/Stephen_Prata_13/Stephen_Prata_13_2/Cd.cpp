#include "pch.h"
#include "Cd.h"

Cd::Cd(const char * si,  const char * s2, int n, double x) {
	performers = new char[strlen(si) + 1];
	label = new char[strlen(s2) + 1];
	strcpy_s(performers, strlen(si) + 1, si);
	strcpy_s(label, strlen(s2) + 1, s2);
	selections = n;                       
	playtime = x;
}

Cd::Cd() {
	performers = new char[1];
	label = new char[1];
	strcpy_s(performers, 1, "\0");
	strcpy_s(label, 1, "\0");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd() {
	delete[] performers;
	delete[] label;
}

Cd::Cd(const Cd & d) {
	selections = d.selections;
	playtime = d.playtime;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
}

Cd & Cd::operator=(const Cd & d) {
	if (this == &d)
		return *this;
	delete[] performers;
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

void Cd::Report() const {
	std::cout << "Performers: " << performers
		<< std::endl << "Label: " << label << std::endl
		<< "Selections: " << selections << std::endl
		<< "Playtime: " << playtime << std::endl;
}



