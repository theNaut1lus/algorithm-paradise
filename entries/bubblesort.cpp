#include<iostream>
#include<conio.h>
#include <math.h>
#include<string.h>
#include<ctype.h>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int size, arr[100000], i, j, temp;
	int k =0;
	srand((unsigned) time (0));
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		arr[i]= rand();
	}
	cout<< arr[i];
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
			    k++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"k : "<< k <<endl;
	getch();
}

