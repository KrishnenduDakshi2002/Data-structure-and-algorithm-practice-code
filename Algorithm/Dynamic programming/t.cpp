#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;
#define printArray(a,s) for(int i=0;i<s;i++){cout<<a[i]<<" ";}
#define sizeArray(a)  sizeof(a)/sizeof(a[0])



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int c[10];
    memset(c,-1,sizeof(c));
    printArray(c,10);
    cout<<sizeArray(c);
    return 0;
}