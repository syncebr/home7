#include<iostream>
using namespace std;
int myArea(int);
int myArea(int, int);

int main() {
	setlocale(LC_ALL, "rus");
	cout << myArea(5) << endl << myArea(5, 10)<<endl;
	system("pause");
	return 0;
}

int myArea(int size) {
	return size*size;
}

int myArea(int width, int height) {
	return width*height;
}
