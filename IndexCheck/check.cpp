#include <iostream>

using namespace std;

int main()

{
   int n;
   cout<<"Enter no. of elements";
   cin>>n;
   int arr[n],count=0;
   for(int i=0;i<n;i++)
   {
   cout<<"Enter "<<i+1<<"th element";
   cin>>arr[i];
   }

   for(int i=0;i<n/2;i++)
   {
      if(arr[i]==arr[n-i-1])
       {
       cout<<"Element at index "<<i+1<<" is equal to that at index "<<n-i<<"\n";
       count++;
       }
   }

   if(count==n/2)
   cout<<"All elements are equal at corresponding index";
   else
   cout<<"all elements are not equal at corresponding index";

}
