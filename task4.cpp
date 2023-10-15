#include<iostream>
#include<cmath>
using namespace std;
main()
{
float distance,angle;
cout<<"Enter the distance from the base of the tree (in feet): ";
cin>>distance;
cout<<"Enter the angle of elevation (in degrees): ";
cin>>angle;
float rad=angle/57.2958;
float result=distance*tan(rad);
cout<<"The height of the tree is: "<<result<<" feet";
}
