#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
using namespace std;

int numbAnalyze(int, float &);

int main() {
	int numb;
	float percentEven=0;
	cout<<"Enter number: ";
	cin>>numb;
	cout<<numbAnalyze(numb,percentEven);
	cout<<endl<<round(percentEven)<<"%";
	return 0;
}

int numbAnalyze(int numb, float &pE)
{
	int counterDigits=0;
	while(numb>0)
	{
		if( !((numb%10)&1) ) pE++;
		numb/=10;
		counterDigits++;
	}
	pE=pE/counterDigits*100;
	return counterDigits;
}
