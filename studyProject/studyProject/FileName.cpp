#include <iostream> 
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;

	cout << "������� ���: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " - ����������";
			else
				cout << year << " - ������������";
		}
		else
			cout << year << " - ����������";
	}
	else
		cout << year << " - ������������";

	return 0;
	
}