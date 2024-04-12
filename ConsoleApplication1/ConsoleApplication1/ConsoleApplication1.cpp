#include <iostream>
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, sum = 0;
	cout << "¬ведите ваше число: ";
	cin >> n;

	for(int i = 1; i <= n; ++i) {
		sum += i;
	}

	cout << "—умма всех чисел равна " << sum;
}


