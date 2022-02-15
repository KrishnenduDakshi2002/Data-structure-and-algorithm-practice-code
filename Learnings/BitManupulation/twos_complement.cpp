#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

long long twos_complement(long long b)
{
    for(int i =0 ; i<= log2(b)+1;i++)
    {
        b = (b ^ (1 << i));
    }

    return b + 1;  // instead of b + 1 if we return b, then that was 1's complement
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<twos_complement(13);
    
    return 0;
}