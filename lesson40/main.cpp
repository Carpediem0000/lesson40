#include "Forum.h"

int main()
{
	int menu = 0;
	Forum forum;
	string login, password1, password2;

	do
	{
		cout << "1 - Register\n";
		cout << "2 - Sign In\n";
		cout << "3 - Sign Out\n";
		cout << "4 - Change password\n";
		cout << "5 - Show all users\n";
		cout << "6 - Show online users\n";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "Input login: ";
			cin >> login;
			cout << "Input password: ";
			cin >> password1;

			forum._register(login, password1);
			break;
		case 2:
			cout << "Input login: ";
			cin >> login;
			cout << "Input password: ";
			cin >> password1;

			forum.signIn(login, password1);
			break;
		case 3:
			cout << "Input login: ";
			cin >> login;
			
			forum.signOut(login);
			break;
		case 4:
			cout << "Input login: ";
			cin >> login;
			cout << "Input old password: ";
			cin >> password1;
			cout << "Input new password: ";
			cin >> password2;

			forum.changePassword(login, password1, password2);
			break;
		case 5:
			forum.show();
			break;
		case 6:
			forum.showOnline();
			break;
		default:
			break;
		}

	} while (menu);
}