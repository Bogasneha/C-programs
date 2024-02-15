#include<iostream>
using namespace std;
int main(){
	char s;
	cout<<"enter a character";
	cin>>s;
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U'){
		cout<<s<<"is vowel";
	}
	else{
		cout<<s<<"is a charcter";
	}
	return 0;
}
