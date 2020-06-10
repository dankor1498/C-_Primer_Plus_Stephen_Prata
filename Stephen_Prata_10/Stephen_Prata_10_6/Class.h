#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#ifndef MOVE_H_
#define MOVE_H_

const int SIZE = 3;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	~Move();
	void showmove() const; 
	Move add(const Move & m);
	void reset(double à = 0, double b = 0); 
};
#endif