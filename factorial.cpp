using namespace std;
#include<iostream>
int main(){
	int fact=1,i,n;
	cout<<"enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;

	}
	cout<<"factorial of"<<n<<"is:"<<fact;
	return 0;
}
