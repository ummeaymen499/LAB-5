#include<iostream>
using namespace std;

int timetravel(int hour, int minutes);
main()
{
     int hour, minutes;
     cout << "Enter Hours: ";
     cin>>hour;
     cout << "Enter Minutes: ";
     cin>>minutes;
     timetravel(hour, minutes);
     
}
int timetravel(int hour, int minutes)
{
      int newtime;
      int newmin=minutes+15;
      if(newmin>60){
          hour=hour+1;
          newtime=newmin-60;
     cout<<hour<<":"<<newtime;
    }
      if(newmin<60){
         
       cout<<hour<<":"<<newmin;
     }
}
       
      
          
   


     
 

