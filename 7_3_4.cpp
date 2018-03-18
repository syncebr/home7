/*  Вывести цифры числа слева направо.
 *  Пример: ввод: 179 вывод: 1 7 9.
 *  Нельзя использовать массивы и циклы!*/

#include <iostream>
using namespace std;

int sampleDigit(int);

int main() {
	int number;
	cout<<"Enter number: ";
	cin>>number;
	sampleDigit(number);
	return 0;
}

int sampleDigit(int num){
	if (num/10) {
		sampleDigit(num/10);
		cout<<num%10<<"\t";
	}
	else cout<<num<<"\t";
}
