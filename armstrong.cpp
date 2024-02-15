using namespace std;
#include<iostream>
int main()
{
	int n,temp,sum=0,r;
	cout<<"enter a number";
	cin>>n;
	temp=n;
	while(n!=0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum){
		cout<<"the number is armstrong";
	}
	else{
		cout<<"the number is not armstrong";
	}
	return 0;
}
