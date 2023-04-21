#include "iostream"
#include <math.h>
using namespace std;

void standard_devi(int, int, int, int, int,float*, float*, float*);


int main()
{
  int a,b,c,d,e;
  float sum=0,avg=0,sd=0;
  cout<<"Enter 5 Numbers: ";
  cin>>a>>b>>c>>d>>e;
  standard_devi(a,b,c,d,e,&sum,&avg,&sd);
  cout<<"Sum of Total = "<<sum<<endl;
  cout<<"Average/Mean = "<<avg<<endl;
  cout<<"Standard Deviation "<<sd<<endl;
  return 0;

}
void standard_devi(int a,int b,int c,int d,int e,float *sum,float *avg,float *sd)
{
  float v;
  *sum = a+b+c+d+e;
  *avg = *sum/5;
  v+=pow((a - *avg),2);
  v+=pow((b - *avg),2);
  v+=pow((c - *avg),2);
  v+=pow((d - *avg),2);
  v+=pow((e - *avg),2);

  v=v/5;
  *sd=sqrt(v);

}
