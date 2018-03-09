/*
3. Напишите функцию, которая определяет минимальный элемент массива
(его значение и номер).
Внутри функции запрещено использовать команды cin и cout.
 */

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;

void generateArr(int *, int );
void printArr(int *, int);
int* findMinElement(int *,const int);


int main(void) {
	const int N=10;
	int arr[N];
	srand(time(0));
	generateArr(arr,N);
	printArr(arr,N);
	int *ptrMin=findMinElement(arr,N);
	cout<<"Минимальный элемент: "<<*ptrMin<<endl;
	cout<<"Номер этого элемента: "<<ptrMin-arr+1;
	return 0;
}



//инициализация массива
void generateArr(int arr[], int size) {
	int *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = rand() % 19-10;
		ptrArr++;
	}
}
//вывод на консольмассива
void printArr(int arr[], int size) {
	int *ptrArr = arr;
	if (size == 0) cout << "массив пуст";
	while (ptrArr < arr+size) {
		printf("%2d   ", *ptrArr);
		ptrArr++;
	}
	cout << endl;
}

int* findMinElement(int arr[], const int size){
int *ptrMinElement=arr;
int *tmp=arr+1;
while(tmp<arr+size){
	if(*tmp<*ptrMinElement) ptrMinElement=tmp;
	tmp++;
}

return ptrMinElement;
}
