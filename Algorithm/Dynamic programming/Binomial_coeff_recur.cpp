#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

int coeff(int n, int k)
{
    if(k==0 || n==k)
        return 1;

    return coeff(n-1,k-1) + coeff(n-1,k);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout<<coeff(4,2);
    
    return 0;
}