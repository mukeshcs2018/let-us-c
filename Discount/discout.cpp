#include<iostream>
using namespace std;

int main()
{
  int quant,dis;
  float rate,total=0;

  cout<<"Enter the quantity and rate : ";
  cin>>quant>>rate;

  if(quant > 1000)
  {
    cout<<"The total Amount: "<<(quant*rate)-(quant * rate *10/100);

  }
  else
  cout<<"The amount is: "<<quant*rate;
  return 0;
}
