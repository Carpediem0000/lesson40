#include "Dairy.h"

int main()
{
	Dairy dairy;

	dairy.addEvent(Date(), "C++");
	dairy.addEvent(Date() + 1, "JS");
	dairy.addEvent(Date() - 2, "DataBase");
	dairy.addEvent(Date(), "Movie");
	dairy.addEvent(Date()+1, "Python");

	dairy.show();
	cout << "==================================\n";

	dairy.showEventCurrentDay();

	cout << "--------------------------------\n";

	dairy.removeEvent(Date() - 2, 0);
	dairy.show();
}