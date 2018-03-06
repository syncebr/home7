/*
Описать функцию определения максимального элемента в одномерном массиве.
С помощью этой функции найти максимум в каждой строке двумерного массива и
вывести эти максимумы на консоль.
Также с помощью этой функции найти максимальный элемент во всем двумерном массиве.
 */

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;

int findMax(int *,int);
void generateArr(int *, int );
void printArr(int *, int );

int main() {
	const int N=5;
	const int M=6;
	int arr[N][M];
	srand(time(0));
	generateArr(arr[0],N*M);
	int i=0;
	while(i<N){
		printArr(arr[i],M);
		i++;
		}
	i=0;
	while(i<N){
		cout<<"Max "<<i+1<<" row is: "<<findMax(arr[i],M)<<endl;
		i++;
		}
	cout<<"Max in all array is: "<<findMax(arr[0],N*M);
	return 0;
}

int findMax(int arr[], int size)
{
	int *ptrArr=arr;
	int max=*arr;
	while(ptrArr<arr+size)
	{
		if(*ptrArr>max) max=*ptrArr;
		ptrArr++;
	}
	return max;
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
