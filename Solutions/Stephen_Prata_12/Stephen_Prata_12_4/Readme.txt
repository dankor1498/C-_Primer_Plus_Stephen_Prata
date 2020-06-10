������� ��������� ������� ������ Stack, ������������� � �������� 10.10:
// stack.h � ���������� ������ ��� ��� �����

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };  // constant specific to class
	Item * pitems;      // holds stack items
	int size;           // ���������� ��������� � �����
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

��� ������� �� �������� ������, ������ ����� ���������� ����������� ����������
������ ��� �������� ��������� �����. ���������� ������ ��� ������������
������ ������������� � �������� ���������, ������� ������������� ������
���� �������, ������� ����������� ����������� � �������� ������������.