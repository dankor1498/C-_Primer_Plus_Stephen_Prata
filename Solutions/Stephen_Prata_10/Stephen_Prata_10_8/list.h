#pragma once

#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

#ifndef LIST_H
#define LIST_H

typedef int Item;

class List
{
	enum {SIZE = 5};
	Item mas[SIZE];
	int top;
public:
	List();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);
	void visit(void(*pf) (Item &));
	void showlist() const;
	~List();
};

void Square(Item &);

#endif
