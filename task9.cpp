#include<iostream>
using namespace std;
int timetravel(int hours,int min);
main()
{
int hours,min,result;
cout<<"Enter Hours: ";
cin>>hours;
cout<<"Enter Minutes: ";
cin>>min;
result=timetravel(hours,min);

}
int timetravel(int hours,int min)
{int result;
int addmin=min+15;
int addhours=addmin-59;
int a=hours+1;
int b=addhours-1;
int c=0;
int d=min+15;
 if(addmin>59)
{
 cout<<""<<a<<":"<<addhours;
}
else
{
cout<<""<<hours<<":"<<addmin;
}
return result;
}