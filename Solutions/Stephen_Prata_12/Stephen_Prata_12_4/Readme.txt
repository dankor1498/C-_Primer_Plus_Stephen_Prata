Имеется следующий вариант класса Stack, определенного в листинге 10.10:
// stack.h — объявление класса для АТД стека

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };  // constant specific to class
	Item * pitems;      // holds stack items
	int size;           // количество элементов в стеке
	int top;            // index for top stack item
public:
	Stack(int n = 10); 
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);   
	bool pop(Item & item);        
	Stack & operator= (const Stack & st);
};

Как понятно из закрытых членов, данный класс использует динамически выделенный
массив для хранения элементов стека. Перепишите методы для соответствия
новому представлению и напишите программу, которая демонстрирует работу
всех методов, включая конструктор копирования и операцию присваивания.