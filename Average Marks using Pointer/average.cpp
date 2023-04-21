#include "iostream"
using namespace std;
void avg_per(int, int, int, int *, int *,float*,float*);


int main()
{
  int phy,chem,math,max=0,tot=0;
  float avg=0,per=0;
  cout<<"Enter marks obtained in phy,chem,math: ";
  cin>>phy>>chem>>math;
  cout<<"What is the total marks(combined of 3 subjects) to which exam was conducted:";
  cin>>max;
  avg_per(phy,chem,math,&tot,&max,&avg,&per);
  cout<<"Total Marks that You Obtained :"<<tot<<endl;
  cout<<"Average Marks: "<<avg<<endl;
  cout<<"Percentage : "<<per<<endl;
  return 0;
}
void   avg_per(int phy, int chem, int math, int *tot, int *max, float *avg, float *per)
{
  *tot = phy+chem+math;
 *avg= *tot/3;
 *per = *tot * 100 / *max;
}
