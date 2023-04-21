#include "iostream"
using namespace std;

int main()
{
  int arr1[] = {1,2,3,4,5,6,7};
  int arr2[7];
  int i;
  for(i=0; i<7; i++)
  {
    arr2[i] = arr1[i];

  }
  for(i=6; i>=0; i--)
  {
    cout<<arr2[i]<<" ";
  }
}
