#include "pch.h"
#include "person.h"

//metods Person
void Person::Return() const
{
	cout << "Name: " << name << endl << "Surname: " << surname << endl;
}

Person::Person() : name("\0"), surname("\0")
{
}

Person::Person(string _name, string _surname) : name(_name), surname(_surname)
{
}

Person::Person(const char * _name, const char * _surname)
{
	name = _name;
	surname = _surname;
}

void Person::Show() const
{
	Return();
}

Person::~Person()
{
}

//metods Gunslinger
void Gunslinger::Return() const
{
	cout << "Time: " << time << endl << "Notches: " << notches << endl;
}

double Gunslinger::Draw() const
{
	return time;
}

void Gunslinger::Show() const
{
	Person::Return();
	Return();
}

Gunslinger::Gunslinger() : Person(), time(0.0), notches(0)
{
}

Gunslinger::Gunslinger(string _name, string _surname, double _time, int _notches) : Person(_name, _surname)
{
	time = _time;
	notches = _notches;
}

Gunslinger::Gunslinger(const char * _name, const char * _surname, double _time, int _notches) : Person(_name, _surname)
{
	time = _time;
	notches = _notches;
}

Gunslinger::Gunslinger(const Person & p, double _time, int _notches) : Person(p)
{
	time = _time;
	notches = _notches;
}

Gunslinger::~Gunslinger()
{
}

//metods PokerPlayer
void PokerPlayer::Show() const
{
	Person::Show();
}

int PokerPlayer::Draw() const
{
	srand(time(NULL) | clock());
	return unsigned int(0 + rand() % 52);
}

void PokerPlayer::Return() const
{
	cout << "Card number: " << Draw() << endl;
}

//metods BadDude
BadDude::BadDude() : Person(), Gunslinger(), PokerPlayer()
{
}

void BadDude::Show() const
{
	Person::Return();
	Gunslinger::Return();
	PokerPlayer::Return();
}

double BadDude::Gdraw() const
{
	return Gunslinger::Draw();
}

int BadDude::Cdraw() const
{
	return PokerPlayer::Draw();
}

