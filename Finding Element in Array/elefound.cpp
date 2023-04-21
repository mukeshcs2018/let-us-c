#include "iostream"
using namespace std;

int main()
{
   int arr[10];
   int num,i,count=0;
   cout<<"Enter 10 Elements of array: ";
   for(i=0; i<10; i++)
   cin>>arr[i];

   cout<<"Enter a number to search in array: ";
   cin>>num;

   for(i=0; i<10; i++)
    if(arr[i]==num)
      count++;

    if(count==0)
    cout<<"No element found\n";
    else
    cout<<"Element "<<num<<" found "<<count<<" times\n";
}
