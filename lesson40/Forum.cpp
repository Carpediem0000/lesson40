#include "Forum.h"

Forum::~Forum()
{
	online.clear();
	users.clear();
}

void Forum::_register(string login, string password)
{
	if (users.find(login) == users.end())
	{
		users[login] = password;
	}
	else {
		cout << "Fail: user already exists\n";
	}
}

void Forum::signIn(string ligin, string password)
{
	if (users.find(ligin) == users.end())
	{
		cout << "Fail: no such user\n";
	}
	else {
		if (users[ligin] == password)
		{
			cout << "Wellcome!\n";
			online.push_back(ligin);
			return;
		}
		cout << "Fail: incorrect password\n";
	}
}

void Forum::signOut(string login)
{
	auto item = find_if(online.begin(), online.end(), [login](string item) {return item == login; });
	if (item == online.end())
	{
		cout << "U not online\n";
	}
	else
	{
		online.erase(item);
		cout << "success: user logged out\n";
	}
}

void Forum::show() const
{
	for (auto obj : users)
	{
		cout << "login: " << obj.first << " | password: " << obj.second << endl;
	}
}

void Forum::showOnline() const
{
	for (auto obj : online)
	{
		cout << obj << endl;
	}
}

void Forum::changePassword(string login, string oldPassword, string newPassword)
{
	if (users.find(login) == users.end())
	{
		cout << "Fail: no such user\n";
	}
	else {
		if (users[login] == oldPassword)
		{
			users[login] = newPassword;
			cout << "Password changed\n";
			return;
		}
		cout << "Fail: incorrect password\n";
	}
}
