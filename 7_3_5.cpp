/*  Вывести цифры числа слева направо.
 *  Пример: ввод: 179 вывод: 9 7 1.
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
		cout<<num%10<<"\t";
		sampleDigit(num/10);
	}
	else cout<<num<<"\t";
}
