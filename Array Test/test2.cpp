#include "iostream"
using namespace std;
int main()
{
  int i=3,*x;
  float j=1.5,*y;
  char k='c',*z;

  cout<<"Value at i="<<i<<endl;
  cout<<"Value at j="<<j<<endl;
  cout<<"Value at k="<<k<<endl;
  x=&i; y=&j; z=&k;

  cout<<"Original Address of x="<<x<<endl;
  cout<<"Original Address of y="<<y<<endl;
  cout<<"Original Address of z="<<z<<endl;

  x++; y++; z++;
  cout<<"New Address in x="<<x<<endl;
  cout<<"New Address in y="<<y<<endl;
  cout<<"New Address in z="<<z<<endl;
}
