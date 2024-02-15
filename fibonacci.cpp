#include<iostream>
using namespace std;
int main(){
	int n1=0,n2=1,next=0,i,n;
	cout<<"enter the number od elements";
	cin>>n;
	cout<<n1<<n2;
	for(i=2;i<n;i++)
	{
		next=n1+n2;
		n1=n2;
		n2=next;
		cout<<next;
	}
	return 0;
}
