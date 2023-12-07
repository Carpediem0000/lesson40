#include "Dictianory.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int menu = 0;
	string str1, str2;
	Dictianory arr;

	do
	{
		cout << "1 - show\n";
		cout << "2 - search\n";
		cout << "3 - add\n";
		cout << "4 - remove\n";
		cout << "5 - edit\n";
		cout << "0 - save\n"; cin >> menu;

		switch (menu)
		{
		case 1:
			arr.show();
			break;
		case 2:
			cout << "enter word: ";
			cin >> str1;
			arr.searchWord(str1);
			break;
		case 3:
			cout << "enter en word: ";
			cin >> str1;
			cout << "enter ru word: ";
			cin >> str2;
			arr.addWord(str1, str2);
			break;
		case 4:
			cout << "enter en word: ";
			cin >> str1;
			arr.removeWord(str1);
			break;
		case 5:
			cout << "enter en word: ";
			cin >> str1;
			cout << "enter ru word: ";
			cin >> str2;

			arr.editWord(str1, str2);
			break;
		case 0:
		default:
			break;
		}
	} while (menu);
}