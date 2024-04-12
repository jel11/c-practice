#include <iostream> 
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;

	cout << "Введите год: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " - високосный";
			else
				cout << year << " - невисокосный";
		}
		else
			cout << year << " - високосный";
	}
	else
		cout << year << " - невисокосный";

	return 0;
	
}