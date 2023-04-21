#include "iostream"
using namespace std;

int main()
{
  int arr[10];
  int neg=0,pos=0,even=0,odd=0;
  cout<<"Enter Elements in array: ";
  int i;
  for(i=0; i<10; i++)
    cin>>arr[i];

  for(i=0; i<10; i++)
  {
    if(arr[i]<0)
    neg++;
    if(arr[i]>0)
    pos++;
    if(arr[i]%2==0)
    even++;
    else
    odd++;

  }
  cout<<"Negative Numbers are:"<<neg<<endl;
  cout<<"Positive Number ares:"<<pos<<endl;
  cout<<"Total Even Numbers are:"<<even<<endl;
  cout<<"Total Odd Number are:"<<odd<<endl;
}
