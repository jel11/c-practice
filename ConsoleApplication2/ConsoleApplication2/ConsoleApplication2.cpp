#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rows;
	cout << "������� ���������� �����: ";
	cin >> rows;

	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= i; ++j) {
			cout << "<html> </html> |";
		}
		cout << "\n";
	}
	return 0;
}