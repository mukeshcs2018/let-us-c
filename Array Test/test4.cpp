#include "iostream"
using namespace std;

int main()
{
  int size;
  cout<<"Enter the size of Array: ";
  cin>>size;
  char *p;
  p=(char*)malloc(size*sizeof(char));
  int i;
  for(i=0; i<size; i++)
  {
    cin>>p[i];
  }
  cout<<"Array Elements are: "<<endl;

  for(i=0; i<size; i++)
  cout<<p[i]<<" ";
}
