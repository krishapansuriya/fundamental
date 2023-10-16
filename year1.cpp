#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the Year: ";
    cin>>yr;
    if((yr%4==0) && (yr%100!=0))
    {
        cout<<"\nIt is a Leap Year."<<endl;
    }
    else if(yr%400==0)
	{
        cout<<"\nIt is a Leap Year."<<endl;
    }
    else
    {
        cout<<"\nIt is not a Leap Year."<<endl;
    }
}
