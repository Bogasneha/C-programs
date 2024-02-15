using namespace std;
#include<iostream>
int main(){
	int a[10],n,i,temp;
	cout<<"enter the size of a array";
	cin>>n;
	cout<<"enter the elements in an array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
