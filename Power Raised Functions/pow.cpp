#include "iostream"
using namespace std;
void power(int num, int pow)
{
  int ans=1;
  for(int i=1;i<=pow; i++)
  {
    ans*=num;
  }
  cout<<ans;
}

int main()
{
  int num,pow;
  cout<<"Enter a numer raised pow:";
  cin>>num>>pow;
  power(num,pow);
  return 0;
}
