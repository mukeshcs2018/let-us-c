#include <iostream>

using namespace std;

int main()
{
int avg, sum=0;
int marks[29];
int i;

for(i=0;i<=29; i++)
{
    cout<<"Enter Marks";
    cin>>marks[i];
}
for(i=0; i<=29; i++)
{
    sum=sum + marks[i];

}
avg=sum/30;
cout<<"Average marks = "<<avg;
return 0;

}

