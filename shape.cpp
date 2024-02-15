using namespace std;
#include<iostream>
class shape{
	
	public:
		int lenght,width;
		void s()
		{
			cout<<"enter the length and width:";
			cin>>lenght>>width;
		}
};
class rectangle:public shape{
	public:
		int a,p;
		void r()
		{
			a=lenght*width;
			p=2*lenght+width;
			cout<<"area of recatngle:";
			cout<<a<<endl;
			cout<<"perimeter of rectangle="<<p<<endl;
		}
};
class triangle:public shape{
	int height;
	public:
		int a,p;
		void t()
		{
			cout<<"enter the height";
			cin>>height;
			a=0.2*lenght*width;
			p=lenght+width+height;
			cout<<"area of triangle"<<a<<endl;
			cout<<"perimeter of traingle"<<p<<endl;
		}
};
int main()
{
	triangle x;
	rectangle y;
	x.s();
	x.t();
	y.s();
	y.r();
	return 0;
}
