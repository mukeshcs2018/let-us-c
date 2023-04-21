#include "iostream"
using namespace std;

bool leap(int year)
{
    return ((year%4==0) && (year%100!=10) || (year%400));

}
int main()
{
  int year;
  cout<<"Enter Year\n";
  cin>>year;
  leap(year) ? cout<<"Leap Year":cout<<"Not leap";
  return 0;
}
