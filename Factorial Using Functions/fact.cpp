#include "iostream"
using namespace std;
void fact(int);

int main()
{
  int num;
  cout<<"Enter a Number: ";
  cin>>num;
  fact(num);
  return 0;
}

void fact(int num)
{
int fact=1;

for(int i=num; i>=1; i--)
{
  fact=fact*i;
}
cout<<fact<<endl;
}
