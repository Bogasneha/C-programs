using namespace std;
#include<iostream>
#include<string>
class Bankaccount{
	public:
		string accountholdername;
		int balance;
		int accountnumber;
		Bankaccount(string a, int b, int c);
		void display()
	{
		cout<<"balance="<<balance<<endl;
	}
};
Bankaccount::Bankaccount(string a, int b, int c)
{
	accountholdername=a;
	balance=b;
	accountnumber=c;
}
int main()
{
	string accountholdername;
	int balance,accountnumber;
	cout<<"enter the accountholdername";
	cin>>accountholdername;
	cout<<"enter the balance";
	cin>>balance;
	cout<<"enter the account number";
	cin>>accountnumber;
	Bankaccount bank(accountholdername, balance, accountnumber);
	bank.display();
	
	return 0;
}
