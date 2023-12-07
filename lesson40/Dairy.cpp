#include "Dairy.h"

Dairy::Dairy()
{
}

Dairy::~Dairy()
{
	dairy.clear();
}

void Dairy::addEvent(Date d, string s)
{
	dairy[d].push_back(s);
}

void Dairy::showEventCurrentDay() const
{
	Date d;
	for (auto obj : dairy)
	{
		if (obj.first == d)
		{
			for (int i = 0; i < obj.second.size(); i++)
			{
				cout << "\t#" << i + 1 << " " << obj.second[i] << endl;
			}
			return;
		}
	}
	cout << "Note found\n";
}

void Dairy::removeEvent(Date d, int ind)
{
	auto item = dairy.find(d);
	if (item  == dairy.end())
	{
		cout << "Event not found\n";
	}
	else
	{
		if (ind >= 0 && ind < item->second.size())
		{
			cout << "Event "<< item->second[ind] << " delete\n";
			item->second.erase(item->second.begin() + ind);
			if (item->second.size() == 0)
			{
				dairy.erase(d);
			}
		}
		else
		{
			cout << "Event not found\n";
		}
	}

}

void Dairy::show() const
{
	for (auto obj : dairy)
	{
		obj.first.showDate();
		for (int i = 0; i < obj.second.size(); i++)
		{
			cout << "\t#" << i + 1 << " " << obj.second[i] << endl;
		}
		cout << endl;
	}
}
