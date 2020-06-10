// Розділ 15 - №1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "tv.h"

int main()
{
	using std::cout;
	Tv s42;
	cout << "Initial settings for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout << "\nAdjusted settings for 42\" TV:\n";
	s42.settings();

	Remote grey;
	grey.show_regime();
	s42.set_regime(grey);
	grey.set_chan(s42, 10);
	grey.volup(s42);
	grey.volup(s42);
	cout << "\n42\" settings after using remote:\n";
	grey.show_regime();
	s42.settings();

	Tv s58(Tv::Off);
	s58.set_mode();
	cout << "\n58\" settings:\n";
	s58.settings();
	s58.set_regime(grey);
	grey.show_regime();
	return 0;
}