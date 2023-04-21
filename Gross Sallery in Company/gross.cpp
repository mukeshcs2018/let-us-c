#include "iostream"
using namespace std;

int main()
{
  float bs,hra,da,gs;
  cout<<"Enter basic sallery: ";
  cin>>bs;

  if(bs < 1500)
  {
    hra = (10/100)*bs;
    da = (90/100)*bs;
  }
  else
  {
    hra=500;
    da= (98/100)*bs;
  }
  gs = bs+hra+da;
  cout<<"Gross sallery: "<<gs;
  return 0;
}
