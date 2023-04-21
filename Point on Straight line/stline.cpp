#include "iostream"
using namespace std;

int main()
{
  float x1,y1,x2,y2,x3,y3,m,n;
  cout<<"Enter point x1,y1: ";
  cin>>x1>>y1;
  cout<<"Enter point x2,y2 :";
  cin>>x2>>y2;
  cout<<"Enter point x3,y3: ";
  cin>>x3>>y3;
  m = (y2-y1) / (x2-x1);
  n = (y3-y2) / (x3-x2);

  if(m==n)
  cout<<"All 3 point lie on same point \n";
  else
  cout<<"All 3 points don't lie on same line\n";
}
