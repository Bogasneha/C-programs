using namespace std;
#include<iostream>
#include<string.h>
int reverse(char *str1)
{
	int i,len,temp;
	len=strlen(str1);
	for(i=0;i<len/2;i++)
	{
		temp=str1[i];
		str1[i]=str1[len-i-1];
		str1[len-i-1]=temp;
	}
}
int main()
{
	char str[20];
	cout<<"enter the string";
	cin>>str;
	reverse(str);
	cout<<"after reversomg a string"<<str;
	return 0;
}
