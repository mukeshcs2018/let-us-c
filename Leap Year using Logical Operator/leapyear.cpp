#include "iostream"
using namespace std;
int main()
{
  int year;
  cout<<"Enter Year to check: ";
  cin>>year;

  if((year%4==0) && (year%100!=0) || year%400==0)
  cout<<"Leap year\n";
  else
  cout<<"Not Leap Year\n";
}
