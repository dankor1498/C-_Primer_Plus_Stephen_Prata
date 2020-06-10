#include "stdafx.h"
#include "golf.h"

void setgolf(golf & g, const char * name, int hc) {
	strcpy_s(g.fullname, strlen(name) + 1, name);
	g.handicap = hc;
}

int setgolf(golf & g) {
	char next;
	int i = 0;
	std::cout << "Введите имя: ";
	while (std::cin.get(next)) {
		if (next == '\n' && i == 0) return 0;
		g.fullname[i] = next;
		if (next == '\n') break;
		i++;
	}
	g.fullname[i] = '\0';
	std::cout << "Введите гандикап: ";
	std::cin >> g.handicap;
	std::cin.get();
	return 1;
}

void handicap(golf & g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf & g) {
	std::cout << "Ваша структура: " << std::endl;
	std::cout << g.fullname << std::endl << g.handicap;
}