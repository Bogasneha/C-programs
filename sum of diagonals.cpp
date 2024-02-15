#include<iostream>
using namespace std;
int main()
{
	int a[10][10],i,j,m,n,sum=0;
	cout<<"enter the size of matrix:";
	cin>>m>>n;
	cout<<"enter the elements of the matrix";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}

	cout<<"the sum is :"<<sum;
	return 0;
}
