#include "iostream"
using namespace std;

void disp1(int);
void disp2(int*);


int main()
{
  int marks[] = {55,65,75,56,78,78,90};
  int i;
  for(i=0; i<=6; i++)
  disp1(marks[i]);
  cout<<"\n";
  for(i=0; i<=6; i++)
  disp2(&marks[i]);
  return 0;

}

void disp1(int m)
{
  cout<<m<<" ";
}

void disp2(int *n)
{
  cout<<*n<<" ";
}
