#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;
long long twos_complement(long long b)
{
    for(int i =0 ; i<= log2(b)+1;i++)
    {
        b = (b ^ (1 << i));
    }

    return b + 1;  
}

long bit_sub(long a,long b)
{
    a = twos_complement(a);
    
    return a;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<twos_complement(17);

    
    return 0;
}