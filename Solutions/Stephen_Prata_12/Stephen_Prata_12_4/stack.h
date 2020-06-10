#pragma once
#include <iostream>
#include <cctype>

#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	//enum { MAX = 10 };  // constant specific to class
	Item * pitems;      // holds stack items
	int size;           // количество элементов в стеке
	int top;            // index for top stack item
public:
	Stack(int n = 10); 
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);   
	bool pop(Item & item);        
	Stack & operator= (const Stack & st);
	friend std::ostream & operator<<(std::ostream & os, const Stack & st);
};
#endif
