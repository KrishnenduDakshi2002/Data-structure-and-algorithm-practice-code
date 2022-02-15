#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

unsigned uglyNum(unsigned n)
{
    unsigned ugly[n];
    ugly[0]=1;
    unsigned i2=0,i3=0,i5=0;
    unsigned next_multiple_2 = 2;
    unsigned next_multiple_3 = 3;
    unsigned next_multiple_5 = 5;

    for(unsigned i=1;i<n;i++)
    {
        ugly[i]= min(next_multiple_2,min(next_multiple_3,next_multiple_5));

        if(ugly[i]==next_multiple_2)
        {
            i2 ++;
            next_multiple_2 = ugly[i2]*2;
        }
        if(ugly[i]==next_multiple_3)
        {
            i3 ++;
            next_multiple_3 = ugly[i3]*3;
        }
        if(ugly[i]==next_multiple_5)
        {
            i5 ++;
            next_multiple_5 = ugly[i5]*5;
        }
    }
    return ugly[n-1];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<uglyNum(150);

    
    return 0;
}