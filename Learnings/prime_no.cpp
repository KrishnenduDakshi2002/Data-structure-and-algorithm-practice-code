#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;


bool isPrime(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;  
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int Min,Max;
        cin>>Min>>Max;
        for(int i=Min;i<=Max;i++)
        {
            if(isPrime(i))
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }




    return 0;
}