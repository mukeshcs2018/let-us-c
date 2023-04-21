#include "iostream"
using namespace std;
int main()
{
  int sal,hr,i=1,temp;
  bool choice=true;
  char ch;
  while(choice)
  {
    cout<<"\nEnter salary: ";
    cin>>sal;
    cout<<"\nEnter hours worked: ";
    cin>>hr;
    if(hr>40)
    {
      temp=hr-40;
      temp*=12;
      sal+=temp;
      cout<<"\nSalary: "<<sal;
    }
    else
    cout<<"\nKindly Work more than 40hrs";
  cout<<"\nDo you want to run this shit again? [y = yes, n = no]: ";
  cin>>ch;
  if((ch=='y') || (ch=='Y'))
  {
    continue;
  }
  else
  {
    break;
  }
}
}
