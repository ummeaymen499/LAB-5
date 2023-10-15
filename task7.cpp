#include<iostream>
using namespace std;
void argument(int num); 
main()
{
int num;
cout<<"Enter a five-digit number: ";
cin>>num;
argument(num);

}
void argument(int num) 
{
int reverse;
int a,b,c,d,e,num1,num2,num3;
a=num%10;
num1=num/10;
b=num1%10;
num2=num1/10;
c=num2%10;
num3=num2/10;
d=num3%10;
e=num3/10;
reverse=a*10000+b*1000+c*100+d*10+e;
   if(num==reverse)
   {
cout<<"The number is symmetrical.";
   }
   else
   {
cout<<"The number is not symmetrical.";
   }
}
