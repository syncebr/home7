/*
Написать функцию, которая в двумерном массиве вещественных чисел
меняет знак элементов некоторого столбца на противоположный (
номер столбца передавать в качестве параметра).
Использовать функцию для преобразования матрицы размером 4х5.
Выполнить два варианта такой функции:
a)функция, предназначенная для массивов с числом столбцов, равным 5;
б)универсальная функция, которую можно использовать при любом числе строк и столбцов.
 */

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>
using namespace std;

void generateArr(float *, int );
void printArr(float *, int);
void multiPrint(float *, int, int);
void reverseSign(float *,int , int , int );

int main(void) {
	const int N=4;
	const int M=5;
	float arr[N][M];
	srand(time(0));
	generateArr(arr[0],N*M);
	multiPrint(arr[0],N,M);
	int numCol;
	bool flag=true;
	while(flag){
	cout<<"Введите номер стобца для замены знаков(нумерация от 1): ";
	cin>>numCol;
	if(numCol>0 && numCol<=M) flag=false;
	}
	reverseSign(arr[0],N*M, M , numCol-1 );
	multiPrint(arr[0],N,M);
	return 0;
}



//инициализация массива
void generateArr(float arr[0], int size) {
	float *ptrArr = arr;
	while (ptrArr < (arr + size)) {
		*ptrArr = (rand() % 1001)/100.0 -5.0;
		ptrArr++;
	}
}
void multiPrint(float arr[],const int row,const int col){
	int i=0;
	while(i<row){
		printArr(arr+i*col, col);
		i++;
	}
}
//вывод на консольмассива
void printArr(float arr[],const int size) {
	float *ptrArr = arr;
	if (size == 0) cout << "массив пуст";
	while (ptrArr < arr+size) {
		printf("%5.2f   ", *ptrArr);
		ptrArr++;
	}
	cout << endl;
}

void reverseSign(float arr[],int size, int col, int num){
	float *ptrArr=arr+num;
	while(ptrArr<arr+size){
		*ptrArr-=2*(*ptrArr);
		ptrArr+=col;
	}
}
