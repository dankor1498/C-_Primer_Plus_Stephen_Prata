#include <Windows.h>
#include <iostream>

using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while(cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	cout << endl << endl;
	for (int i = 0; i < entered; i++) {
		display1(ptr_stu[i]);
	}
	cout << endl << endl;
	for (int i = 0; i < entered; i++) {
		display2(&ptr_stu[i]);
	}
	cout << endl << endl;
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "\nDone \n"; 

  	cin.get();
}

int getinfo(student pa[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (cin.get() == '\n') {
			cin.clear();
			cout << "Invalid input, entry process terminated.\n";
			break;
		}
		cin >> (pa + i)->fullname;
		cin >> (pa + i)->hobby >> (pa + i)->ooplevel;
		cin.get();
	}
	return i;
}

void display1(student st) {
	cout << st.fullname << endl << st.hobby << endl << st.ooplevel << endl;
}

void display2(const student * ps) {
	cout << ps->fullname << endl << ps->hobby << endl << ps->ooplevel << endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; i++) {
		cout << (pa + i)->fullname << endl << (pa + i)->hobby << endl << (pa + i)->ooplevel << endl;
	}
}

