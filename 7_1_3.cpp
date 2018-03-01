#include <iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

char compare(int,int);

int main() {
	double numb_1,numb_2;
	cout<<"Enter number 1: ";
	cin>>numb_1;
	cout<<"Enter number 2: ";
	cin>>numb_2;
	cout<<compare(numb_1,numb_2);
	return 0;
}

char compare(int numb_1, int numb_2)
{
char result;
if(numb_1>numb_2) result='>';
if(numb_1<numb_2) result='<';
if(numb_1==numb_2) result='=';
return result;
}
