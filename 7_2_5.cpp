/*Напишите функцию, с переменным количеством аргументов, которая в качестве обязательного параметра принимает тип действия и количество переменных
и выполняет выбранное действие над этими переменными. «+» - сложение, «*» - умножение, «s» - среднее арифметическое.
Например:
double R = calc(‘s’,5,3,4,5,3,7);
cout<<R;
На экране мы увидим 4.4.*/
#include <iostream>
using namespace std;
double calc(char op, int num, ...);

void main() {
	double R = calc('s', 5, 4, 8, 1, 2, 9);
	cout << " " << R << " " << endl;
	system("pause");
}

double calc(char op, int num, ...) {
	int sum = 0, comp = 1;
	int count = 0;
	int *ptr;
	ptr = &num + 1;
	for (int i = 0; i < num; i++, ptr++) {
		sum += *ptr;
		count++;
	}
	ptr = &num + 1;
	for (int j = 0; j<num; j++, ptr++) {
		comp*= *ptr;

	}
	switch (op) {
	case '+': return sum; break;
	case '*': return comp; break;
	case 's': return (double)sum / count; break;
	default: cout << "Error ! " << endl;
	}
	cout << "Error ! " << endl;
	return 1;
}


