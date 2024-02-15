#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],lar,slar;
	cout<<"enter the size of the array";
	cin>>n;
	cout<<"enter the elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]>a[1])
	{
		lar=a[0];
		slar=a[1];
	}
	else{
		lar=a[1];
		slar=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>lar)
		{
			slar=lar;
			lar=a[i];
		}
		else if(a[i]>slar&&a[i]!=lar)
		{
			slar=a[i];
		}
	}
	cout<<"second largest element:"<<slar;
	return 0;
}
