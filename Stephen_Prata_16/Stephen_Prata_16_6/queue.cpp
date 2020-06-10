#include "pch.h"
#include "queue.h"

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}