/*Написать рекурсивную функцию, которая принимает двумерный
массив целых чисел и количество сдвигов и выполняет круговой сдвиг массива вправо.*/
#include<iostream>
#include<ctime>

using namespace std;

void generateArr(int *, int);
void multiPrint(int *, int, int);
void printArr(int *, int);

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	const int ROW = 4, COL = 4;
	int arr[ROW][COL];
	generateArr(arr[0], ROW*COL);
	multiPrint(arr[0], ROW, COL);



	system("pause");
	return 0;
}

void generateArr(int arr[], int size) {
	int *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = rand() % 10+1;
		ptrArr++;
	}
}

void printArr(int arr[], int size) {
	int *ptrArr = arr;
	if (size == 0) cout << "массив пуст";
	while (ptrArr < (arr + size)) {
		printf("%2d   ", *ptrArr);
		ptrArr++;
	}
	cout << endl;
}

void multiPrint(int arr[], int row, int col) {
	int *ptrArr=arr;
	while (ptrArr < arr + row*col) {
		printArr(ptrArr, row);
		ptrArr += row;
	}
}
