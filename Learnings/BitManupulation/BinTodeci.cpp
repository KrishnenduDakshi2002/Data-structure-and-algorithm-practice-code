#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

long to_decimal(long b , int base)
{
    if(b==1)
    {
        return (1 * base);
    }

    long rem = b % 10;
    long div = b/10;
    
    return (rem* base) + to_decimal(div,(base << 1));
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<to_decimal(11101,1);

    
    return 0;
}