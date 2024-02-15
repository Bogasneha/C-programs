#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,a[100];
	cout<<"enter the size of an array";
	cin>>n;
	cout<<"enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	 cout<<"sum of elements:"<<sum;
	 return 0;
}
