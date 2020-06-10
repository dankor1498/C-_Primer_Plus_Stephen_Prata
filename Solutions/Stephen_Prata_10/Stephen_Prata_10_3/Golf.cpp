#include "stdafx.h"
#include "golf.h"

Golf::Golf() {
	strcpy_s(fullname, 8, "no_name");
	handicap = 0;
}

Golf::Golf(const char * name, int hc) {
	strcpy_s(fullname, strlen(name) + 1, name);
	handicap = hc;
}

/*int setgolf(golf & g) {
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
}*/

void Golf::hhandicap(int hc) {
	handicap = hc;
}

void Golf::showgolf() const {
	std::cout << "Ваша структура: " << std::endl;
	std::cout << fullname << std::endl << handicap;
}

Golf::~Golf() 
{

}

Golf & Golf::setgolf() {
	char _fullname[Len];
	int _handicap;
	char next;
	int i = 0;
	std::cout << "Введите имя: ";
	while (std::cin.get(next)) {
		if (next == '\n' && i == 0){ 
			*this = Golf::Golf(); 
			return *this;
	    }
		_fullname[i] = next;
		if (next == '\n') break;
		i++;
	}
	_fullname[i] = '\0';
	std::cout << "Введите гандикап: ";
	std::cin >> _handicap;
	std::cin.get();
	*this = Golf::Golf(_fullname, _handicap);
	return *this;
}

int Golf::sravnenie(Golf & s) {
	if ((strcmp(s.fullname, fullname) == 0) && (handicap == s.handicap))
		return 1;
	else return 0;
}