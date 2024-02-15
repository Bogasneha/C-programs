using namespace std;
#include<iostream>
int prime(int n);
int main()
{
	int n,s;
	cout<<"enter the number";
	 cin>>n>>
	 s=prime(n);
	 s==2?cout<<"prime number"<<cout<<"not prime number";
	 return 0;
}
int prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			
		}
		return count++;
	}
}
