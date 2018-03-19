//Написать рекурсивный алгоритм сортировки методом выбора.

#include <iostream>
#include <time.h>
#include <cstdlib>
#include<cstdio>

using namespace std;

void printArr(int *, int);
void generateArr(int *, int);
void sort(int *, int , int );

int main() {
	srand(time(0));
	const int SIZE=10;
	int arr[SIZE];
	generateArr(arr, SIZE);
	cout << " Массив : \n";
	printArr(arr, SIZE);
	cout << " Отсортированный массив :\n";
	sort(arr, 0, SIZE);
	printArr(arr, SIZE);
	return 0;
}

void sort(int arr[], int left, int right) {
	int beg = left;
	int j = right;
	int k = beg + 1;
	int end = j - 1;
	int tmp;
	int imin = beg;
	while (k <= end) {
		if (arr[imin] > arr[k]) {
			imin = k;

		}
		k++;
	}
	tmp = arr[beg];
	arr[beg] = arr[imin];
	arr[imin] = tmp;
	beg++;
	if(beg<end)sort(arr, beg, j);
}

void generateArr(int arr[], int size) {
	int *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = rand() % 51;
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
