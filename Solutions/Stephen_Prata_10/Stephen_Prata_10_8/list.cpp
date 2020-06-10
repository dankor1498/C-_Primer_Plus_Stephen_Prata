#include "stdafx.h"
#include "list.h"

void Square(Item & n) {
	n *= n;
}

List::List()
{
	top = 0;
}

bool List::isempty() const
{
	return top == 0;
}

bool List::isfull() const
{
	return top == SIZE;
}

bool List::push(const Item & item) {
	if (top < SIZE)
	{
		mas[top++] = item;
		return true;
	}
	else
		return false;
}

void List::visit(void(*pf) (Item &)) {
	for (int i = 0; i < top; i++) {
		pf(mas[i]);
	}
}

void List::showlist() const {
	for (int i = 0; i < top; i++) {
		cout << mas[i] << "   ";
	}
	cout << endl;
}

List::~List()
{
}
