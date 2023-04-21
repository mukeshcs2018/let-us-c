#include "iostream"
using namespace std;
int main()
{
  int opt,num,count=0,fact=1;
  while(opt!=4)
  {
  cout<<"1. Factorial of Number\n";
  cout<<"2. Prime or not\n";
  cout<<"3. Odd or even\n";
  cout<<"4. Exit\n";

  cin>>opt;
  switch(opt)
  {
    case 1:

      cout<<"Enter a number:\n";
      cin>>num;
      for(int i=num; i>=1; i--)
      {
        fact*=i;
      }
      cout<<"Factorial is "<<fact<<"\n";
      break;

      case 2:

        cout<<"Enter a number:";
        cin>>num;
        for(int j=1; j<=num; j++)
        {
          if(num%j==0)
          {
            count++;
          }
        }
        if(count==2)
        {
          cout<<"It's a prime Number\n";
        }
        else
        cout<<"Not Prime\n";
        break;

        case 3:
        cout<<"Enter a Number: ";
        cin>>num;
        if(num%2==0)
          cout<<"Number is Even\n";
        else
          cout<<"Number is Odd\n";
          break;

          case 4:
          cout<<"Exit\n";





    }
    cout<<"\n";
  }
}
