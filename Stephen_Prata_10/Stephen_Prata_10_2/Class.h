#pragma once

#include <iostream>
#include <string>

class Person {
private:
	static const int LIMIT = 25;
	std::string lname; // �������
	char fname[LIMIT]; // ���
public:
	Person() { lname = "no_name"; fname[0] = '\0'; } // #1
	Person(const std::string & ln, const char * fn = "Heyyou"); // #2
	// ��������� ������ ���������� lname � fname
	void Show() const; // ������ : ��� �������
	void FormalShow() const; // ������ : �������, ���
};