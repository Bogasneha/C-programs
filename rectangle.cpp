using namespace std;
#include<iostream>
class Rectangle{
	public:
		int length;
		int width;
		int area;
		Rectangle( int l, int b, int a);
		void displayrectangle()
		{
			area=length*width;
			cout<<"area of rectangle="<<area<<endl;
		}
};
Rectangle::Rectangle(int l, int b, int a)
{
	length=l;
	width=b;
	area=a;
}
int main()
{
	int length;
	int width;
	int area;
	cout<<"enter the length:";
	cin>>length;
	cout<<"enter the width:";
	cin>>width;
	Rectangle rectangle(length, width, area);
	rectangle.displayrectangle();
	return 0;
}
