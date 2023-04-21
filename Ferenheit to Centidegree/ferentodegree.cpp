#include<iostream>
using namespace std;
int main()
{
  float feren,deg;
  cout<<"\nEnter Temprature in Ferenheit: ";
  cin>>feren;
  deg = (feren-32)/1.8;
  cout<<"Temp in Centigrade(Degree Celcious): "<<deg<<"\n";
}
