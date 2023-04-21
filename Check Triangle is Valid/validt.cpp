#include "iostream"
using namespace std;

int main()
{
  float a,b,c,valid=0;
  std::cout<<"Enter the value of a, b, c :";
  std::cin>>a>>b>>c;
  if(a+b>c)
  {
    if(b+c>a)
    {
      if(c+a>b)
      valid=1;
    }
  }


  if(valid)
  std::cout<<"Triangle is Valid\n";
  else
  std::cout<<"Triangle is not Valid:";
}
