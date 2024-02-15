using namespace std;
#include<iostream>
class Car
{
	public:
		string brand;
		string model;
		int year;
		Car(string s, string y, int z);
};
Car::Car(string s, string y, int z)
{
	brand=s;
	model=y;
	year=z;
}
int main()
{
	Car carobj1("BMW","X50",1980);
	Car carobj2("Ford","Mustang",1990);
	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year;
	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year;
	return 0;
}
