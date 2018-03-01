#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void frame (int,int,int,int);

int main ()
{
//	setlocale(LC_ALL, "rus");
int x,y,width,height;
cout<<"Введите кооринату х вершины: ";
cin>>x;
cout<<"Введите кооринату y вершины: ";
cin>>y;
cout<<"Введите ширину прямогульника: ";
cin>>width;
cout<<"Введите высоту прямоугольника: ";
cin>>height;
frame(x,y,width,height);

//	system("pause");
	return 0;
}

void frame(int x, int y, int width, int height)
{
	int z=0;
	for(int i=0;i<y;i++)
		cout<<endl;
	for (int i = 0; i < width; i++)
	{
		while(z<x){
			cout<<" ";
			z++;
		}
		cout << '*';
	}

	cout << endl;

	for (int i = 0; i < height - 2; i++)
	{
		z=0;
		while(z<x){
					cout<<" ";
					z++;
				}
		cout << '*';
		for (int j = 0; j < width - 2; j++)
		{
			cout << " ";
		}
		cout << '*' << endl;
	}
	z=0;
	for (int i = 0; i < width; i++)
	{
		while(z<x){
					cout<<" ";
					z++;
				}
		cout << '*';
	}
	cout << "\n\n";
}
