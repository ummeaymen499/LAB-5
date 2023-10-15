#include<iostream>
using namespace std;
void argument(int num); 
main()
{
int num;
cout<<"Enter a three-digit number: ";
cin>>num;
argument(num);

}
void argument(int num) 
{
int reverse;
int a,b,c,num1;
a=num%10;
num1=num/10;
b=num1%10;
c=num1/10;
reverse=a*100+b*10+c;
   if(num==reverse)
   {
cout<<"The number is symmetrical.";
   }
   else
   {
cout<<"The number is not symmetrical.";
   }
}