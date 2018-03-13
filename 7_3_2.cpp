/*Дано число n.Вывести YES, если n является точной степенью двойки, 
NO – в противном случае.Операцию возведения в степень нельзя использовать!*/
#include <iostream>
using namespace std;

bool output(int);

void main() {
	int num;
	cout << "Input number :";
	cin >> num;
	int step = output(num);
	if (step)cout << " Yes ";
	else cout << " No ";
	cout << endl;
	system("pause");
}

bool output(int a) {
	if (a & 1) 
		return false;
	else {
		if (a / 2 == 1)
			return true;
		a /= 2;
		output(a);
	}
}
