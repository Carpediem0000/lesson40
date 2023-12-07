#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <Windows.h>
#include <fstream>
#include <algorithm>
using namespace std;

class Dictianory
{
	map<string, string> en_ru;
public:
	Dictianory();
	~Dictianory();

	void searchWord(string word)const;

	void addWord(string en, string ru);
	void removeWord(string en);
	void editWord(string en, string ru);

	void show()const;
};

