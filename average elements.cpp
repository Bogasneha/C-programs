#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,avg,a[10];
	cout<<"enter the size of an array";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	cout<<"the average of elements in an array"<<avg;
	return 0;
}
