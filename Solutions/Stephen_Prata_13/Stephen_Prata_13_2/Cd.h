#pragma once
#ifndef CD_H
#define CD_H
#include <iostream>
#include <cstring>

class Cd {                                // ������������ �������-����
private:
	char *performers;
	char *label;
	int selections;                       // ���������� ���������
	double playtime;                      // ����� ��������������� � �������
public:
	Cd(const char * si, const char * s2, int n, double x);
	Cd();
	Cd(const Cd & d);
	virtual Cd & operator=(const Cd & d);	virtual ~Cd();
	virtual void Report() const;                  // ������� ��� ������ � �������-�����
};

#endif
