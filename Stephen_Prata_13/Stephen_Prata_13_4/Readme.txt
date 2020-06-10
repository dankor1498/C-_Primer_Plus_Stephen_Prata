—оюз программистов-меценатов собирает коллекцию бутылочного портвейна.
ƒл€ ее описани€ администратор союза разработал класс Port:

#include <iostream>
using namespace std;
class Port // портвейн
{
private:
	char * brand;
	char style[20];         // например, tawny (золотистый), ruby (рубиновый), vintage (марочный)
	int bottles;
public:
	Port(const char * br = "none", const char * st = "none", int b = 0);
	Port(const Port & p);   // конструктор копировани€
	virtual ~Port() { delete[] brand; }
	Port & operator= (const Port & p);
	Port & operator+= (int b); // добавл€ет b к bottles
	Port & operator-= (int b); // вычитает b из bottles, если это возможно
	int BottleCount() const { return bottles; }
	virtual void Show() const;
	friend ostream & operator<<(ostream & os, const Port & p);
};

ћетод Show() выводит информацию в следующем формате:
Brand: Gallo
Kind: tawny
Bottles: 20
‘ункци€ operator<<() представл€ет информацию в следующем формате (без
символа новой строки в конце):
Gallo, tawny, 20
«авершив определени€ методов дл€ класса Port, администратор написал производный
класс VintagePort, прежде чем был уволен:

cclass VintagePort : public Port // style об€зательно = "vintage"
{
private:
	char * nickname; // т.е. "The Noble", "Old Velvet" и т.д.
	int year;        // год сбора
public:
	VintagePort();
	VintagePort(const char * br, int b, const char * nn, int y);
	VintagePort(const VintagePort & vp);
	~VintagePort() { delete[] nickname; }
	VintagePort & operator=(const VintagePort & vp);
	void Show() const;
	friend ostream & operator<<(ostream & os, const VintagePort & vp);
};

¬ам поручено завершить разработку класса VintagePort.
а. ѕервое задание Ч нужно заново создать определени€ методов Port, т.к. предыдущий
администратор уничтожил свой код.
б. ¬торое задание Ч объ€сните, почему одни методы переопределены, а другие
нет.
в. “ретье задание Ч объ€сните, почему функции operator=() и operator<<()
не определены как виртуальные.
г. „етвертое задание Ч обеспечьте определени€ дл€ методов VintagePort.