#include "iostream"
using namespace std;
int main()
{
  int num=1,count;
  float sum=0.0,fact;
  for(num=1;num<=7;num++)
  {
    fact=1;
    for(count=1;count<=num;count++)
    {
      fact=fact*count;
    }
    sum = sum+(num/fact);
  }




  cout<<"Sum of Series: "<<sum;
}
