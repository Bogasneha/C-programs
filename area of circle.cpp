#include<iostream>
using namespace std;
float area(int r);
int main()
{
	int r;
	cout<<"enter the radius of circle:";
	cin>>r;
	cout<<"area of the circle="<<area(r);
	return 0;
}
float area(int r)
{
	float a;
	a=3.14*r*r;
	return a;
}
