#include<iostream>
using namespace std;
int main()
    {
        int num, count = 1, rem, sum;

        while(count <= 500)
        {
            num = count;
            sum = 0;

            while(num)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }

            if(count == sum)
            {
                cout<<count<<" is a Armstrong Number\n";
            }

            count++;
        }

         return 0;
    }
