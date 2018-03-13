/*Даны два целых числа А и В.
Вывести все числа от А до В в порядке возрастания, если А<В, или в порядке убывания в противном случае.
Пример: ввод: 5 1 вывод: 5 4 3 2 1.*/
#include <iostream>
using namespace std;
void output(int a, int b) {
	if (a == b) {
		cout << "\t" << b;
		return;
	}
	if (a < b) {
		cout << "\t" << a++;
		output(a, b);
	}
	if (a > b) {
		cout << "\t" << a--;
		output(a, b);
	}
}
void main() {
	int num1, num2;
	cout << "Input A :";
	cin >> num1;
	cout << " Input B :";
	cin >> num2;
	output(num1, num2);
	cout << endl;
	system("pause");
}
