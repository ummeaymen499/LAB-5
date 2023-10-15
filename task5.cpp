#include<iostream>
#include<cmath>
using namespace std;
main()
{
float a,b,c;
cout<<"Enter the value of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
cout<<"Enter the value of c: ";
cin>>c;
float disc=pow(b,2)-4*a*c;
if(disc>0)
    {
     float root1=(-b+sqrt(disc))/(2*a);
     float root2=(-b-sqrt(disc))/(2*a);
     cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
     
    }
if(disc==0)
    {
     float root=(-b/(2*a));
     cout<<"Solution: x = "<<root;
    }
if(disc<0)
    {
    float realPart=-b/(2*a);
    float imaginaryPart=(sqrt(-disc))/(2*a);
    cout<<"Complex Solutions: x = "<<realPart<<" + "<<imaginaryPart<<"i and x = "<<realPart<<" - "<<imaginaryPart<<"i";
    
     
    }

}
