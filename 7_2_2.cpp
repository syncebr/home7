/*
Одномерный массив из 10 элементов инициализировать случайными числами от -9 до 9.
Вывести исходный массив на консоль.
 Поменять местами первый отрицательный элемент и последний положительный.
  Преобразованный массив также вывести на консоль.
  При работе с массивом использовать только указатели!
   Оформить в виде отдельных функций:
   1) инициализацию массива,
   2) вывод на консоль,
   3) поиск первого отрицательного,
   4) последнего положительного и
   5) обмен местами двух элементов массива.
 */

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
int* findFirstNeg(int *, int);
int* findLastPos(int *, int );
void generateArr(int *, int );
void printArr(int *, int);
void swapElements(int *, int, int);

int main() {
	const int N=10;
	int arr[N];
	srand(time(0));
	generateArr(arr,N);
	printArr(arr,N);
	int *ptrPos;
	int *ptrNeg;
	if (findLastPos(arr,N)==0) cout<<"Нету положительных!"<<endl;
	else {
		ptrPos=findLastPos(arr,N);
		cout<<*ptrPos<<endl;
	}
	if(findFirstNeg(arr,N)==0) cout<<"Нету отридцательных!"<<endl;
	else {
		ptrNeg=findFirstNeg(arr,N);
		cout<<*ptrNeg<<endl;
	}

	int tmpNum1, tmpNum2;
	bool flag=false;
	while (!flag){
	cout<<"Введите номер первого элемента для замены(нумерация массива начинается с 0): ";
	cin>>tmpNum1;
	if(tmpNum1<N && tmpNum1>=0) flag=true;
	}
	flag=false;
	while (!flag){
		cout<<"Введите номер первого элемента для замены(нумерация массива начинается с 0): ";
		cin>>tmpNum2;
		if(tmpNum2<N && tmpNum2>=0) flag=true;
		}
	tmpNum1--;
	tmpNum2--;
	swapElements(arr,tmpNum1,tmpNum2);
	printArr(arr,N);
	return 0;
}


int* findFirstNeg(int arr[], int size){
int *ptrNeg=arr;
while (ptrNeg<arr+size){
	if (*ptrNeg<0) return ptrNeg;
	ptrNeg++;
}
return NULL;
}

int* findLastPos(int arr[], int size){
int *ptrPos=arr+size-1;
while (ptrPos>arr){
	if (*ptrPos>0) return ptrPos;
	ptrPos--;
}
return NULL;
}

//инициализация массива
void generateArr(int arr[], int size) {
	int *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = rand() % 19-10;
		ptrArr++;
	}
}
//вывод на консоль двумерного массива
void printArr(int arr[], int size) {
	int *ptrArr = arr;
	if (size == 0) cout << "массив пуст";
	while (ptrArr < arr+size) {
		printf("%2d   ", *ptrArr);
		ptrArr++;
	}
	cout << endl;
}

void swapElements(int arr[], int num1, int num2){
	int tmp;
	tmp=*(arr+num1);
	*(arr+num1)=*(arr+num2);
	*(arr+num2)=tmp;
}
