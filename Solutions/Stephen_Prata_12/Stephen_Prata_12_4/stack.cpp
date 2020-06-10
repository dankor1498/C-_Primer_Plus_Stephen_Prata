#include "stdafx.h"
#include "stack.h"


Stack::Stack(int n)    // create an empty stack
{
	top = 0;
	size = n;
	pitems = new Item[size];
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == size;
}

bool Stack::push(const Item & item)
{
	if (top < size)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack::Stack(const Stack & st) {
	top = st.top;
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++) {
		*(pitems + i) = *(st.pitems + i);
	}
}

Stack & Stack::operator=(const Stack & st) {
	if (this == &st)
		return *this;
	delete[] pitems;
	top = st.top;
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++) {
		*(pitems + i) = *(st.pitems + i);
	}
	return *this;
}

std::ostream & operator<<(std::ostream & os, const Stack & st) {
	os << "________________ Stack ________________\n"
		<< "Size: " << st.size << std::endl << "Top: " << st.top << std::endl;
	for (int i = 0; i < st.top; i++) {
		os << *(st.pitems + i) << "\t";
	}
	os << std::endl;
	return os;
}

Stack::~Stack()
{
	delete[] pitems;
}
