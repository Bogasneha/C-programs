using namespace std;
#include<iostream>
int main(){
	int i,j,n,coef,spaces;
	cout<<"enter the value of n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		coef=1;
		for(j=1;j<(n-i);j++)
		{
			cout<<" ";
		}
		for(spaces=0;spaces<=i;spaces++){
			cout<<" "<<coef;
			coef=coef*(i-spaces)/(spaces+1);
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	
	return 0;
}
