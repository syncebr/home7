#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

double largerOf(double &,double &);

int main() {
	double numb1,numb2;
	cout << "Enter number 1:";
	cin>>numb1;
	cout << "Enter number 2:";
	cin>>numb2;
	cout<<"The biggest one is: "<<largerOf(numb1,numb2);
	cout<<endl<<numb1<<endl<<numb2;
	return 0;

}

double largerOf(double &numb1,double &numb2)
{
	if(numb1>numb2) {
		numb2=numb1;
		return numb1;
	}
	else {
		numb1=numb2;
		return numb2;
	}
}
