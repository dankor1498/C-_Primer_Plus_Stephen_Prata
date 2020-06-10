#include <Windows.h>
#include <iostream>

using namespace std;

template <typename T>
T maxn(T *mas, int n);
template <>const char * maxn <const char*>(const char** str, int n);

int main(){
	SetConsoleOutputCP(1251);
  	SetConsoleCP(1251);

	int mas[6] = { 8, 48, -780, 50, 0, 45 };
	double mass[4] = { 8.25, 48.99, 78.25, 5.25 };
	const char* strr[5] = {
		"Aaaa aaa",
		"Bbbb bbbb",
		"Cccc ccccc",
		"Dddd dddd",
		"Gggg ggg"
	};
	
	cout << maxn(mas,6) << endl << maxn(mass,4) << endl << maxn(strr,5);
		
  	cin.get();
}

template <typename T>
T maxn(T *mas, int n) {
	T *max = &mas[0];
	for (int i = 0; i < 5; i++) {
		if (*max < *(mas+i)) {
			*max = *(mas + i);
		}
	}
	return *max;
}

template <>const char * maxn <const char*>(const char** str, int n) {
	int max = strlen(*str);
	const char *maxstr = *str;
	for (int i = 0; i < n; i++) {
		if (max < strlen(*(str + i))) {
			max = strlen(*(str + i));
			maxstr = *(str + i);
		}
	}
	return maxstr;
}

