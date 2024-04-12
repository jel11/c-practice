#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char op;
	float num1, num2;

	cout << "Введите ваш оператор (+ - * /) ";
	cin >> op;

	cout << "Введите ваши операнды ";
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
			cout << "На ноль делить нельзя";
		break;
		
	default:
		cout << "Вы ввели неправильный оператор";
		break;
	}
}