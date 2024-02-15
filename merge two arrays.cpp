#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[100],i,k,m,n;
	cout<<"enter the size of array1";
	cin>>m;
	cout<<"enter the array elements";
	for(i=0;i<m;i++)
	{
		cin>>a[i];
		c[i]=a[i];
	}
	k=i;
	cout<<"enter the size of array2:";
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
		c[k]=b[i];
		k++;
	}
	cout<<"the new array";
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
