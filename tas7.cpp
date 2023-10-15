#include<iostream>
using namespace std;
int argument(int num); 
main()
{
int num;
cout<<"Enter a five-digit number: ";
cin>>num;
argument(num);

}
int argument(int num) 
{
int a,b,c,d,e,num1,num2,num3;
a=num%10;
num1=num/10;
b=num1%10;
num2=num1/10;
c=num2%10;
num3=num2/10;
d=num3%10;
e=num3/10;
   if(a==e && b==d)
   {
cout<<"The number is symmetrical.";
   }
   else
   {
cout<<"The number is not symmetrical.";
   }
}