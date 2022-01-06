#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

int test(int s)
{
    if(s > 7)
    {
        return 1;
        cout<<"test successful"<<endl;
    }
    return -1;
}


int main()
{

    int s = 8;
    cout<<test(s);
    
    return 0;
}