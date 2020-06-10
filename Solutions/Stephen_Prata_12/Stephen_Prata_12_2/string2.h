#pragma once
#include <iostream>
#include <cstring>
#include <cctype>

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char * str;             // pointer to string
	int len;                // length of string
	static int num_strings; // number of objects
	static const int CINLIM = 80;  // cin input limit
public:
	// constructors and other methods
	String(const char * s); // constructor
	String();               // default constructor
	String(const String &); // copy constructor
	~String();              // destructor
	int length() const { return len; }
	// overloaded operator methods    
	String & operator=(const String &);
	String & operator=(const char *);
	String operator+(const String &) const;
	String operator+(const char *) const;
	char & operator[](int i);
	const char & operator[](int i) const;
	void stringlow(); //A->a
	void stringup();  //a->A
	int has(char sym);
	// overloaded operator friends
	friend String operator+(const char * str, const String & st) { return (st + str); };
	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st1, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream & operator<<(ostream & os, const String & st);
	friend istream & operator>>(istream & is, String & st);
	// static function
	static int HowMany();
};
#endif

