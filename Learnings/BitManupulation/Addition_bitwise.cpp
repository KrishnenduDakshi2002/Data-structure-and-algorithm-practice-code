#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

long bit_add(long a,long b)
{
    long carry = ((a & b) << 1);
    long result = (a ^ b);

    if(carry ==0 )
    {
        return result;
    }
    return bit_add(carry,result);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<bit_add(33,7);

    
    return 0;
}