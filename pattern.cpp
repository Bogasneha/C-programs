using namespace std;
#include<iostream>
int main()
{
	int i,j,n;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
			
		}
		cout<<endl;
	}
	return 0;
}
