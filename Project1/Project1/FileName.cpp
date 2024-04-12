#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char op;
	float num1, num2;

	cout << "������� ��� �������� (+ - * /) ";
	cin >> op;

	cout << "������� ���� �������� ";
	cin >> num1 >> num2;

	switch (op) {
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		if (num2 != 0)
			cout << num1 / num2;
		else
			cout << "�� ���� ������ ������";
		break;
		
	default:
		cout << "�� ����� ������������ ��������";
		break;
	}
}