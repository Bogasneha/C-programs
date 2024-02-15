using namespace std;
#include<iostream>
class book{
	public:
		string author;
		int price;
		int year;
		book(string a, int p, int y);
		void dipslay()
		{
			cout<<"author="<<author<<endl;
			cout<<"price="<<price<<endl;
			cout<<"publication year"<<year<<endl;
		}
};
book::book(string a, int p, int y)
{
	author=a;
	price=p;
	year=y;
}
int main()
{
	string author;
	int price, year;
	cout<<"enter the author name:";
	cin>>author;
	cout<<"price";
	cin>>price;
	cout<<"year";
	cin>>year;
	book book1(author, price, year);
	book1.dipslay();
	return 0;
}
