using namespace std;
#include<iostream>
int main(){
	int a[10],i,n,p;
	cout<<"enter the size of an array";
	cin>>n;
	cout<<"enter the array elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element";
	cin>>p;
	a[i]=p;
	for(i=0;i<(n+1);i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
