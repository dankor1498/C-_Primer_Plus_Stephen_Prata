#include "stdafx.h"
#include "Class.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

Move::~Move() {

}

void Move::showmove() const {
	cout << "X = " << x << "\tY = " << y << endl;
}

Move Move::add(const Move & m) {
	x += m.x;
	y += m.y;
	return *this;
}

void Move::reset(double a, double b) {
	a = 0.0;
	b = 0.0;
}