#include<iostream>
using namespace std;

int main()
{
  float phy,chem,bio,math,eng,agg,total;
  float per;
  cout<<"\nEnter the marks of Phy: ";
  cin>>phy;
  cout<<"\nEnter the marks of Chem: ";
  cin>>chem;
  cout<<"\nEnter the marks of Bio :";
  cin>>bio;
  cout<<"\nEnter the marks of Maths: ";
  cin>>math;
  cout<<"\nEnter the marks of English: ";
  cin>>eng;
  total = phy+chem+bio+math+bio;
  agg = (total)/5;
  cout<<"\nThe Aggregate Marks obtained: "<<agg;
  per = (total/500)*100;
  cout<<"\nTotal percentage: "<<per<<"\n";

}
