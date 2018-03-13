/*Дано натуральное число N. Вычислить сумму его цифр. Нельзя использовать массивы и циклы!*/
#include <iostream>
using namespace std;

int sum(int);

void main() {
	int chis;
	int dig = 0;
	cout << " Input number : ";
	cin >> chis;
	cout << " Sum of digits = " << sum(chis) << endl;
	system("pause");
}

int sum(int a) {
	if (a < 10) return a;
		return sum(a / 10) + a % 10;
}
