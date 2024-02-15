#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,k,a[10][10],b[10][10],c[10][10];
	cout<<"enter the size of matrix 1:";
	cin>>m>>n;
	cout<<"enter the elements of matrix1:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the size of matrix 2:";
	cin>>m>>n;
	cout<<"enter the elements of matrix 2:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"matrix mul"<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
