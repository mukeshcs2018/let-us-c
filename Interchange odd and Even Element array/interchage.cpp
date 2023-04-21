#include "iostream"
using namespace std;
int main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int temp=0,i;
  for(i=0; i<(sizeof(arr)/sizeof(int));i+=2)
  {
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
  }
  for(i=0; i<(sizeof(arr)/sizeof(int));i++)
  cout<<arr[i]<<" ";
}
