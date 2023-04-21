#include "iostream"
using namespace std;
int main()
{
  int num,fact=1,count=1;
  cout<<"Enter number: ";
  cin>>num;
  while(count<=num){
    fact *=count;
    count++;
  }
  cout<<"Factorial is :"<<fact;
}
