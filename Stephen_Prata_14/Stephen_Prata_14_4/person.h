#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Person
{
private:
	string name;
	string surname;
protected:
	void Return()const;
public:
	Person();
	Person(string _name, string _surname);
	Person(const char *_name, const char *_surname);
	virtual void Show() const;
	virtual ~Person();
};

class Gunslinger : virtual public Person
{
private:
	double time;
	int notches;
protected:
	void Return() const;
	double Draw() const;
public:
	Gunslinger();
	Gunslinger(string _name, string _surname, double _time, int _notches);
	Gunslinger(const char *_name, const char *_surname, double _time, int _notches);
	Gunslinger(const Person & p, double _time, int _notches);
	void Show() const;
	~Gunslinger();
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() : Person() {};
	PokerPlayer(string _name, string _surname) : Person(_name, _surname){};
	PokerPlayer(const char *_name, const char *_surname) : Person(_name, _surname) {};
	PokerPlayer(const Person & p) : Person(p) {};
	void Show() const;
	~PokerPlayer() {};
protected:
	int Draw() const;
	void Return() const;
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
	BadDude();
	BadDude(string _name, string _surname, double _time, int _notches) : 
		Person(_name, _surname), Gunslinger(_name, _surname, _time, _notches),
		PokerPlayer(_name, _surname) {};
	BadDude(const char *_name, const char *_surname, double _time, int _notches) : 
		Person(_name, _surname), Gunslinger(_name, _surname, _time, _notches),
		PokerPlayer(_name, _surname) {};
	BadDude(const Person & p, double _time = 0.0, int _notches = 0) : 
		Person(p), Gunslinger(p, _time, _notches), PokerPlayer(p) {};
	BadDude(const Gunslinger & p, double _time = 0.0, int _notches = 0) :
		Person(p), Gunslinger(p, _time, _notches), PokerPlayer(p) {};
	BadDude(const PokerPlayer & p, double _time = 0.0, int _notches = 0) :
		Person(p), Gunslinger(p, _time, _notches), PokerPlayer(p) {};
	~BadDude() {};
	void Show() const;
protected:
	double Gdraw() const;
	int Cdraw() const;
};

#endif // !PERSON_H_


