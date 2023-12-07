#pragma once
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Forum
{
protected:
	map<string, string> users;
	vector<string> online;
public:
	~Forum();

	void _register(string login, string password);
	void signIn(string ligin, string password);
	void signOut(string login);

	void show()const;
	void showOnline()const;
	void changePassword(string login, string oldPassword, string newPassword);

};

