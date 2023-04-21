#include "iostream"
using namespace std;

int main()
{
  int arr[10];
  int *small;
  cout<<"Enter 10 Elements:";
  int i;
  for(i=0; i<10; i++)
  {
    cin>>arr[i];
  }

  small = &arr[0];
  for(i=0; i<10; i++)
  {
    if(*(arr+i) < *small)
    *small = arr[i];
  }
  cout<<*small<<"\n";
}
