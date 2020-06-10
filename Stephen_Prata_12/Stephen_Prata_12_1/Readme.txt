Имеется следующее объявление класса:
class Cow 
{
	char name[20];
	char * hobby;
	double weight;
public:
	Cow();
	Cow (const char * nm, const char * ho, double wt) ;
	Cow(const Cow c&) ;
	~Cow();
	Cow & operator= (const Cow & c) ;
	void ShowCow() const; // отображение всех данных cow
};
Напишите реализацию для этого класса и короткою программу, использующую все функции - члены.

