#include<iostream>
using namespace std;
string checkalphabetcase(char alphabet);
main()
{
char alphabet;
string result;
cout<<"Enter a character (A/a): ";
cin>>alphabet;
result=checkalphabetcase(alphabet);
}
string checkalphabetcase(char alphabet)
 {
string result;
 if(alphabet=='A')
   {
    cout<<"You have entered Capital A";
   }
if(alphabet=='a')
   {
   cout<<"You have entered small a";
   }
return result;
}