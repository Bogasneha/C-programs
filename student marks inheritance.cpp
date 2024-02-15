using namespace std;
#include<iostream>
class student
{
	int rollno;
	public:
		void a()
		{
			cout<<"enter rollno";
			cin>>rollno;
		}
};
class test:public student{
	public:
		int m1,m2,m3;
		void b()
		{
			cout<<"enter the mark1:";
			cin>>m1;
			cout<<"enter the mark2";
			cin>>m2;
			cout<<"enter the mark3";
			cin>>m3;
		}
};
class result:public test
{
	public:
		int total;
		void c()
		{
			total=m1+m2+m3;
			cout<<"total="<<total;
		}
};
int main()
{
	result r;
	r.a();
	r.b();
	r.c();
	return 0;
}
