#include "Dictianory.h"

Dictianory::Dictianory()
{
	ifstream file("Words.txt");
	if (file.is_open())
	{
		string s1, s2;
		while (!file.eof())
		{
			getline(file, s1);
			getline(file, s2);
			if (s1.empty() || s2.empty())
			{
				continue;
			}
			en_ru[s1] = s2;
		}
		file.close();
	}
}

Dictianory::~Dictianory()
{
	ofstream file("Words.txt");
	if (file.is_open())
	{
		for (auto obj : en_ru)
		{
			file << obj.first << endl;
			file << obj.second << endl;
		}
		file.is_open();
	}
}

void Dictianory::searchWord(string word) const
{
	for (auto obj : en_ru)
	{
		if (obj.first == word || obj.second == word)
		{
			cout << obj.first << " = " << obj.second << endl;
			return;
		}
	}
	cout << "Word not found\n";
}

void Dictianory::addWord(string en, string ru)
{
	if (en_ru.find(en) == en_ru.end())
	{
		en_ru[en] = ru;
		cout << "Word added\n";
	}
	else
	{
		cout << "Word allready in\n";
	}
}

void Dictianory::removeWord(string en)
{
	if (en_ru.find(en) == en_ru.end())
	{
		cout << "Word not found\n";
	}
	else
	{
		en_ru.erase(en_ru.find(en));
		cout << "Word delete\n";
	}
}

void Dictianory::editWord(string en, string ru)
{
	if (en_ru.find(en) == en_ru.end())
	{
		cout << "Word not found\n";
	}
	else
	{
		en_ru[en] = ru;;
		cout << "Word edit\n";
	}

}

void Dictianory::show() const
{
	cout << "\tShow\n";
	for (auto obj : en_ru)
	{
		cout << obj.first << " = " << obj.second << endl;
	}
}
