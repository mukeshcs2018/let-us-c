#include "iostream"
using namespace std;
int main()
{
    int m1,m2,m3,m4,m5,per;
    cout<<"Enter marks m1,m2,m3,m4,m4,m5 :";
    cin>>m1>>m2>>m3>>m4>>m5;
    per = (m1+m2+m3+m4+m5)*100/500;

/* Logic 1
  if(per>=60)
    cout<<"First Division";
    else
    {
      if(per>=50)
        cout<<"Second Division";
    else
      {
        if(per>=40)
          cout<<"Third Division";
        else
        cout<<"Fail";
      }
    }
  }
*/
/* Logic 2
 if(per>=60)
cout<<"First Division";
if((per>=50) && (per<60))
cout<<"Second Division";
if((per>=40) && (per<50))
cout<<"Third Division";
if(per<40)
cout<<"Fail";
}
*/

if(per>=60)
cout<<"First Division";
else if(per>=50)
cout<<"Second Division";
else if(per>=40)
cout<<"Third Division";
else
cout<<"Failed";
}
