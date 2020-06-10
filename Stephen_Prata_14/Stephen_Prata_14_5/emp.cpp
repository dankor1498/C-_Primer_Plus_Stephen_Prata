#include "pch.h"
#include "emp.h"

abstr_emp::abstr_emp()
{
	fname = '\0'; 
	lname = '\0'; 
	job = '\0';
}

abstr_emp::abstr_emp(const std::string & fn, 
	const std::string & ln, const std::string & j): fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
	cout << "Fname: " << fname << endl <<
		"Lname: " << lname << endl << "Job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Fname: ";
	cin >> fname;
	cout << "Lname: ";
	cin >> lname;
	cout << "Job: ";
	cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << "Fname: " << e.fname << endl <<
		"Lname: " << e.lname << endl << "Job: " << e.job << endl;
	return os;
}

abstr_emp::~abstr_emp()
{
}

employee::employee() : abstr_emp()
{
}

employee::employee(const std::string & fn, 
	const std::string & ln, const std::string & j) : abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager(): abstr_emp(), inchargeof(0)
{
}

manager::manager(const std::string & fn, 
	const std::string & ln, const std::string & j, int ico): abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager & m): abstr_emp(m)
{
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Inchargeof: " << InChargeOf() << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Inchargeof: ";
	cin >> InChargeOf();
}

fink::fink(): abstr_emp(), reportsto("\0")
{
}

fink::fink(const std::string & fn, const std::string & ln, 
	const std::string & j, const std::string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const std::string & rpo) : abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & e) : abstr_emp(e)
{
	reportsto = e.reportsto;
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reportsto: " << ReportsTo() << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Reportsto: ";
	getline(cin, ReportsTo());
}

highfink::highfink(): abstr_emp(), fink(), manager()
{
}

highfink::highfink(const std::string & fn, const std::string & ln, 
	const std::string & j, const std::string & rpo, int ico) : abstr_emp(fn, ln, j), fink(fn, ln, j, rpo), manager(fn, ln, j, ico)
{
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) : 
	abstr_emp(e), fink(e, rpo), manager(e, ico)
{
}

highfink::highfink(const fink & f, int ico):
	abstr_emp(f), fink(f), manager(f, ico)
{
}

highfink::highfink(const manager & m, const std::string & rpo):
	abstr_emp(m), fink(m, rpo), manager(m)
{
}

highfink::highfink(const highfink & h):
	abstr_emp(h), fink(h), manager(h)
{
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reportsto: " << ReportsTo() << endl;
	cout << "Inchargeof: " << InChargeOf() << endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Reportsto: ";
	cin.get();
	getline(cin, ReportsTo());
	cout << "Inchargeof: ";
	cin >> InChargeOf();
}
