using namespace std;
#include<iostream>
int main()
{
	int n,i,pos,a[100];
	cout<<"enter the size of an array";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the position";
	cin>>pos;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
