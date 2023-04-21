#include<iostream>
#include<math.h>
using namespace std;
int main()

{
  float a,b,c;
  float s,temp,area;

  cout<<"Enter the side AB: ";
  cin>>a;
  cout<<"Enter the side BC: ";
  cin>>b;
  cout<<"Enter the side CA: ";
  cin>>c;

  s = ( a + b + c)/2; //6
  temp=s*((s-a)*(s-b)*(s-c));

  area = sqrt(temp);
  cout<<"Area is: "<<area;

 }
