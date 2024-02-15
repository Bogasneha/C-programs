using namespace std;
#include<iostream>
int main()
{
	string str,temp;
	int i=0,j;
	cout<<"enter a string";
	cin>>str;
	temp=str;
	j=str.length()-1;
	while(i<j)
	{
		swap(str[i],str[j]);
		i++;
		j--;
		
	}
	if(temp==str){
		cout<<"the string is palindrome";
	}
	else{
		cout<<"the string is not a palindrome";
	}
	return 0;
}

