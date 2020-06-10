// Розділ 17 - №7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main();

void ShowStr(const string &);
void GetStrs(ifstream & fin, vector<string> & vstr);

class Store
{
public:
	Store(ofstream & fout) : out(fout) {};
	void operator()(const string & str);
private:
	ofstream & out;
};

void Store::operator()(const string & str)
{
	size_t len = str.size();
	out.write((char *)&len, sizeof(std::size_t)); 
	out.write(str.data(), len);
}

int main()
{
	vector<string> vostr;
	string temp;
	
	cout << "Enter strings (empty line to quit) :\n"; 
	while (getline(cin, temp) && temp[0] != EOF)
		vostr.push_back(temp);
	cout << "Here is your input.\n"; 
	for_each(vostr.begin(), vostr.end(), ShowStr);
	
	ofstream fout("strings.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();
	
	vector<string> vistr;
	ifstream fin("strings.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input. \n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	
	for_each(vistr.begin(), vistr.end(), ShowStr);
	return 0;
}

void ShowStr(const string & str) {
	cout << str << endl;
}

void GetStrs(ifstream & fin, vector<string> & vstr)
{
	size_t len;
	string str;
	while (fin.read((char *)&len, sizeof(std::size_t))) {
		char ch;
		while (len != 0) {
			fin.get(ch);
			str += ch;
			len--;
		}
		vstr.push_back(str);
		str = '\0';
	}
}
