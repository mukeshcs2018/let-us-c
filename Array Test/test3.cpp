#include "iostream"
using namespace std;

int main()
{
  int arr[] = {10,20,30,45,67,56,74};
  int i, *j, *k, *x, *y;
  j = &i;
  j = j+9;
  k = &i;
  k = k-3;
  x = &arr[1];
  y = &arr[5];
  cout<<y-x<<endl;

  j = &arr[4];
  k = (arr+4);

  if(j == k)
  cout<<"The two pointers point to the location"<<endl;
  else
  cout<<"The two pointer points to different location"<<endl;

    return 0;


}
