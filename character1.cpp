#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter character = ";
	cin>>ch;
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"vowel...."<<endl;
	}
	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		cout<<"vowel...."<<endl;
	}
	else
	{
		cout<<"consonant...."<<endl;
	}
}
