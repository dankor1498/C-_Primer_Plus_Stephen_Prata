Ниже приведено несколько объявлений классов:

class abstr_emp
{
private:
	std::string fname; // имя abstr_emp
	std::string lname; // фамилия abstr_emp
	std::string job;
public:
	abstr_emp();
	abstr_emp(const std::string & fn, const std::string & ln,
		const std::string & j);
	virtual void ShowAll() const; // выводит все данные с именами
	virtual void SetAll();		  // запрашивает значения у пользователя
	friend std::ostream &
		operator<<(std::ostream & os, const abstr_emp & e);
	// Выводит только имя и фамилию
	virtual ~abstr_emp() = 0; // виртуальный базовый класс
};

class employee : public abstr_emp
{
public:
	employee();
	employee(const std::string & fn, const std::string & ln,
		const std::string & j);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof; // количество управляемых abstr_emp
protected:
	int InChargeOf() const { return inchargeof; } // вывод
	int & InChargeOf() { return inchargeof; }     // ввод
public:
	manager();
	manager(const std::string & fn, const std::string & ln,
		const std::string & j, int ico = 0);
	manager(const abstr_emp & e, int ico);
	manager(const manager & m);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class fink : virtual public abstr_emp
{
private:
	std::string reportsto; // кому выводить отчеты
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string & ReportsTo() { return reportsto; }
public:
	fink();
	fink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo);
	fink(const abstr_emp & e, const std::string & rpo);
	fink(const fink & e);
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink : public manager, public fink // надзор за управляющими
{
public:
	highfink();
	highfink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo,
		int ico);
	highfink(const abstr_emp & e, const std::string & rpo, int ico);
	highfink(const fink & f, int ico);
	highfink(const manager & m, const std::string & rpo);
	highfink(const highfink & h);
	virtual void ShowAll() const;
	virtual void SetAll();
};

Здесь в иерархии классов используется множественное наследование с виртуальным базовым классом. 
Поэтому не забывайте о специальных правилах для списков инициализации в конструкторах. 
Обратите также внимание на наличие нескольких методов с защищенным доступом. 
Это упрощает код некоторых методов highfink. (Например, если метод highfink::ShowAll() 
просто вызывает fink::ShowAll() и manager::ShowAll(), то это приводит к двукратному вызову 
abstr_emp::ShowAll().) Реализуйте эти методы и протестируйте классы.
Ниже приведена минимальная тестовая программа:

#include "emp.h"

int main(void)
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	em.ShowAll();
	cout << endl;
	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	ma.ShowAll();
	cout << endl;
	fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	fi.ShowAll();
	cout << endl;
	highfink hf(ma, "Curly Kew"); 
	hf.ShowAll();
	cout << "Press a key for next phase: \n";
	cin.get();
	highfink hf2;
	hf2.SetAll();
	cout << "\nUsing an abstr_emp * pointer:\n\n";
	abstr_emp *tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++) {
		tri[i]->ShowAll();
		cout << endl;
	}
	return 0;
}