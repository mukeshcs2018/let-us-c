#include "iostream"
using namespace std;

void modify(int *,int);

int main()
{
  int arr[10];
  cout<<"Enter 10 Elements: ";
  int i;
  for(i=0; i<10; i++)
  cin>>arr[i];

  modify(&arr[0],10);

  for(i=0; i<10; i++)
  cout<<arr[i]<<" ";
  cout<<"\n";
}
void modify(int *p,int n)
{
  for(n=0; n<10; n++)
  {
    *p *= 3;
    p++;
  }
}
