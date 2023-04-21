#include "iostream"
using namespace std;

int sum(int);
int sum_rec(int);

int main()
{
    int num;
    cout<<"Enter 5 digit Number: ";
    cin>>num;
    cout<<"Without Recursion: "<<sum(num)<<endl;
    cout<<"Recursion: "<<sum_rec(num)<<endl;
}
int sum(int num)
{
  int sum=0;
  while(num)
  {
    sum=sum+(num%10);
    num=num/10;
  }
  return sum;
}

int sum_rec(int num)
{
  if(num)
  {
    return (num%10) + sum_rec(num/10);
  }
  else
  return 0;

}
