using namespace std;
#include<iostream>
int main(){
	int i,num,div,sum=0;
	cout<<"enter a number";
	cin>>num;
	for(i=1;i<num;i++){
		div=num%i;
		if(div==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		cout<<num<<"is perfect numbere";
	}
	else{
		cout<<num<<"is not perfect number";
	}
	return 0;
}
