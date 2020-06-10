#include "pch.h"
#include "Cpmv.h"


Cpmv::Cpmv() : pi(nullptr)
{
	cout << "Cpmv()" << endl;
}

Cpmv::Cpmv(string q, string z)
{
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	cout << "Cpmv(string q, string z)" << endl;
}

Cpmv::Cpmv(const Cpmv & cp)
{
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	cout << "Cpmv(const Cpmv & cp)" << endl;
}

Cpmv::Cpmv(Cpmv && mv) 
{
	pi = mv.pi;
	mv.pi = nullptr;
	cout << "Cpmv(Cpmv && mv)" << endl;
}

Cpmv::~Cpmv()
{
	delete pi;
	cout << "~Cpmv()" << endl;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
	cout << "operator=(const Cpmv & cp)" << endl;
	if (this == &cp)
		return *this;
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
	cout << "operator=(Cpmv && mv)" << endl;
	if (this == &mv)
		return *this;
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	cout << "operator+(const Cpmv & obj)" << endl;
	Cpmv temp = Cpmv(obj.pi->qcode + pi->qcode, obj.pi->zcode + pi->zcode);
	return temp;
}

void Cpmv::Display() const
{
	if (pi == nullptr) {
		cout << "(object empty)" << endl;
	}
	else
		cout << "\nQcode: " << pi->qcode << "\t" << "Zcode: " << pi->zcode << endl;
}
