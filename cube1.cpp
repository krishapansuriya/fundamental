#include<iostream>
using namespace std;
main()
{
	int a[5];
	int i,cube;
	cout<<"Enter array element"<<endl;
	for(i=0;i<=5;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"cube of array"<<endl;
	for(i=0;i<=5;i++)
	{
		cube=a[1]*a[i]*a[i];
		a[i]=cube;
		cout<<a[i]<<endl;
	}
}
