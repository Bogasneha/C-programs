#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter the number x and y";
	cin>>x>>y;
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<"after swapping x and y"<<x<<endl<<y;
	return 0;
}
