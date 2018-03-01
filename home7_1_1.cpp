#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

bool checkNumber(int);

int main (void){
	int userNumber;
	cout<<"Enter number: ";
	cin>>userNumber;
	if(checkNumber(userNumber))
		cout<<"false";
	else
		cout<<"true";
	return 0;
}

bool checkNumber(int a){
	int b= a / 2;
		bool flag=false;
		int i=2;
		while (i<b)
			{
			if ((a%i) == 0)
				{
				flag=true;
				break;
				}
			i++;
			}
	return flag;
}
