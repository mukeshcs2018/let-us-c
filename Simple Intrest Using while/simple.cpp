#include "iostream"

int main()
{
  float p,r,n,si;
  int count;

  count = 1;
  while(count<=3)
  {
    std::cout<<"Enter principal,normal,rate: ";
    std::cin>>p>>n>>r;
    si = p*n*r/100;

    std::cout<<"Simple intrest is: "<<si<<"\n";

    count+=1;
  }
}
