#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float n1,n2;
	cout<<"enter two numbers"<<endl;
	cin>>n1>>n2;
	cout<<"addition is "<<n1+n2<<endl;
	cout<<"subtraction is"<<n1-n2<<endl;
	cout<<"multiplication is"<<n1*n2<<endl;
	cout<<"division is"<<n1/n2<<endl;
	cout<<"modulo is"<<fmod(n1,n2)<<endl;
	return 0;
}
