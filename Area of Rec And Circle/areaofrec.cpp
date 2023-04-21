#include<iostream>
using namespace std;
int main()
{
  float len,bre,rad,areaofrec,cirOfRec,periOfRec,cirofCir,areaofcir;
  cout<<"Enter Length and Breadth of Rectangle: ";
  cin>>len>>bre;
  cout<<"Enter Radius of Circle: ";

  areaofrec=len*bre;
  periOfRec= 2*(len+bre);

  cout<<"Enter Radius of Circle: ";
  cin>>rad;

  areaofcir = 3.14*rad*rad;

  cirofCir = 2*3.14*rad;

  cout<<"\nArea and Peri of Rectangle: "<<areaofrec<<" "<<periOfRec;
  cout<<"\nArea and Circumference: "<<areaofcir<<" "<<cirofCir;

}
