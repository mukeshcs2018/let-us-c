#include<iostream>
using namespace std;
int main()
{
  int num,count,sum=0;
  cout<<"Enter five digit number: ";
  cin>>num;
  count=num%10;
  num=num/10;
  sum +=count;

  count=num%10;
  num=num/10;
  sum +=count;

  count=num%10;
  num=num/10;
  sum +=count;

  count=num%10;
  num=num/10;
  sum +=count;

  count=num%10;
  num=num/10;
  sum +=count;

  cout<<"Sum of 5 Digit is "<<sum;
}
