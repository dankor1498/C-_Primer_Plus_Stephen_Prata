#pragma once
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream> 
#include <cctype>
#include <cmath>

const int len = 4;
const int Len = 40;
struct golf {
	char fullname[Len];
	int handicap;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void handicap(golf & g, int hc);
void showgolf(const golf & g);
