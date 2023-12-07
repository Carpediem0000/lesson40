#pragma once
#include "Date.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

class Dairy
{
	map<Date, vector<string>> dairy;
public:
	Dairy();
	~Dairy();

	void addEvent(Date d, string s);
	void showEventCurrentDay()const;
	void removeEvent(Date d, int ind);


	void show()const;
};

