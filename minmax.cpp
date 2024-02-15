#include<iostream>
using namespace std;
int minmax(int a[], int n);
int main()
{
	int n,a[20],i;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	minmax(a,n);
	return 0;
}
int minmax(int a[], int n)
{
	int max=a[0], min=a[0],i;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"maximum element:"<<max;
	cout<<"minimum element:"<<min;
}
