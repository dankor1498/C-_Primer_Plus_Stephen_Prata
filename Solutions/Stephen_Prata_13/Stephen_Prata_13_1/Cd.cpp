#include "pch.h"
#include "Cd.h"

Cd::Cd(const char * si,  const char * s2, int n, double x) {
	strcpy_s(performers, 50, si);
	strcpy_s(label, 20, s2);
	selections = n;                       
	playtime = x;
}

Cd::Cd() {
	strcpy_s(performers, 50, "no_name");
	strcpy_s(label, 20, "no_name");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd() {

}

void Cd::Report() const {
	std::cout << "Performers: " << performers
		<< std::endl << "Label: " << label << std::endl
		<< "Selections: " << selections << std::endl
		<< "Playtime: " << playtime << std::endl;
}



