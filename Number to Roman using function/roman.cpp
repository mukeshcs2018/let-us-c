#include "iostream"
using namespace std;

void roman(int year)
{
  while(year)
  {
    if(year>=1000)
    {
      cout<<"M";
      year-=1000;
    }

    else if(year>=500)
    {
      cout<<"D";
      year-=500;
    }

    else if(year>=100)
    {
      cout<<"C";
      year-=100;
    }
    else if(year>=50)
    {
      cout<<"L";
      year-=50;
    }
    else if(year>=10)
    {
      cout<<"X";
      year-=10;
    }
    else if(year>=5)
    {
      cout<<"V";
      year-=5;

    }
    else if(year>=1)
    {
      cout<<"I";
      year-=1;
    }
  }
}

int main()
{
  int year;
  cout<<"Enter a year to Convert to Roman: ";
  cin>>year;
  roman(year);
  return 0;
}
