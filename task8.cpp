#include<iostream>
using namespace std;
int evenodd(int num);
main()
{
int num;
cout<<"Enter a five-digit number: ";
cin>>num;
evenodd(num);
}
int evenodd(int num)
{
if(num%2==0)
{
cout<<"Evenish";
}
else
{
cout<<"Oddish";
}
}