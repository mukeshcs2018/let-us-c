#include "iostream"
#include <math.h>
using namespace std;
int main()
{
  float x,ans=0.0;
  cout<<"Enter the velue of x: ";
  cin>>x;
  for(int count=1;count<=7;count++)
  {
    if(count==1)
    {
      ans=(x-1)/x;
    }
    else
    {
        ans=ans+pow((x-1)/x,count)*0.5;
    }
  }
  cout<<"First seven term sum is "<<ans;
}
