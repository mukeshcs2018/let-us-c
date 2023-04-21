#include "iostream"
#include <math.h>
using namespace std;


int main()
{
  float p,n,r,q,a;
  for(int count=1;count<=10;count++)
  {

      cout<<"Enter Principal Amount:\n";
      cin>>p;
      cout<<"Enter number of Years:\n";
      cin>>n;
      cout<<"Enter rate of Intrest:\n";
      cin>>r;
      r=r/100;
      cout<<"Enter Number of Times you compound per year:\n";
      cin>>q;

      a=p*pow((1+(r/q)),n*q);
      cout<<"Compound Amount is :"<<a<<"\n";
  }

}
