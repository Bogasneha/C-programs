#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"enter two numbers";
	cin>>n1>>n2;
	if(n1>n2)
	{
		cout<<n1<<"is greater than"<<n2<<endl;
	}
	else if(n1<n2){
		cout<<n2<<"is greater than"<<n1<<endl;
	}
	else{
		std::cout<<"both are equal ";
	}
	return 0;
}
