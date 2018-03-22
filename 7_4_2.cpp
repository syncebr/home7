#include<iostream>
#include<ctime>
using namespace std;

template <typename MyT>
void generateArr(MyT *, int);

template <typename MyT>
void printArr(MyT *, int);

template <typename MyT>
void swapElements(MyT *, int);

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	const int SIZE = 10;
	int arr[10];
	double dArr[10];
	generateArr(arr, SIZE);
	printArr(arr, SIZE);
	swapElements(arr, SIZE);
	printArr(arr, SIZE);
	cout << "double array:" << endl;
	generateArr(dArr, SIZE);
	printArr(dArr, SIZE);
	swapElements(dArr, SIZE);
	printArr(dArr, SIZE);
	system("pause");
	return 0;
}

template <typename MyT>
void generateArr(MyT arr[], int size) {
	MyT *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = rand() % 10 + 1;
		ptrArr++;
	}
}

template <typename MyT>
void printArr(MyT arr[], int size) {
	MyT *ptrArr = arr;
	if (size == 0) cout << "aray is empty";
	while (ptrArr < (arr + size)) {
		//printf("%2d   ", *ptrArr);
		cout << *ptrArr << "\t";
		ptrArr++;
	}
	cout << endl;
}

template <typename MyT>
void swapElements(MyT arr[], int size) {
	MyT *ptrStart = arr;
	MyT *ptrEnd = arr + size - 1;
	MyT tmp;
	while (ptrStart < ptrEnd) {
		tmp = *ptrStart;
		*ptrStart = *ptrEnd;
		*ptrEnd = tmp;
		ptrEnd--;
		ptrStart++;
	}
}
