#include "iostream"
using namespace std;
int main()
{
  int num,count=1,pow,temp=1;
  cout<<"Enter the value of __power__: ";
  cin>>num>>pow; //2 3
  while(count<=pow) //1 3
  {
    temp*=num;
    count++;
  }
  cout<<temp;
}
