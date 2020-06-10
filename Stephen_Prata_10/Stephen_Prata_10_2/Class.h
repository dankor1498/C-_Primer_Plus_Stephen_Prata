#pragma once

#include <iostream>
#include <string>

class Person {
private:
	static const int LIMIT = 25;
	std::string lname; // фамилия
	char fname[LIMIT]; // имя
public:
	Person() { lname = "no_name"; fname[0] = '\0'; } // #1
	Person(const std::string & ln, const char * fn = "Heyyou"); // #2
	// следующие методы отображают lname и fname
	void Show() const; // формат : имя фамилия
	void FormalShow() const; // формат : фамилия, имя
};