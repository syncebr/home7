#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void largerOf(double &,double &);

int main() {
	double numb1,numb2;
	cout << "Enter number 1:";
	cin>>numb1;
	cout << "Enter number 2:";
	cin>>numb2;
	largerOf(numb1,numb2);
	cout<<"The biggest one is: "<<numb1;
	return 0;

}

void largerOf(double &numb1,double &numb2)
{
	if(numb1>numb2)
		numb2=numb1;
	else
		numb1=numb2;
}
