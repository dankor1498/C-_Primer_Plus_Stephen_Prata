#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
#include <queue>
#include <cstdlib> 
#include <ctime> 


class Customer
{
private:
	long arrive;       
	int processtime;   
public:
	Customer() : arrive(0), processtime(0) {}
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

typedef Customer Item;

#endif

