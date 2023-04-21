#include<iostream>
using namespace std;

int main()
{
  float dist;
  cout<<"Enter Distance in Kilometer: ";
  cin>>dist;
  cout<<"\nDistance in Meter: "<<dist*1000;
  cout<<"\nDistance in Feet: "<<dist*3280.84;
  cout<<"\nDistance in Inch: "<<dist*39370.1;
  cout<<"\nDistance in Centimeter: "<<dist*100000<<"\n";

}
