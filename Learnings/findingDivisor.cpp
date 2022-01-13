#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}


int main()
{
    int num;
    cin>>num;
// O(n)
    // for(int i = 2;i<=num/2;i++)
    // {
    //     if(num%i ==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
stack<int> s;
// O(sqrt(n))
    for(int i =1;i<=sqrt(num);i++)
    {
        if(num% i==0 )
        {
            s.push(i);
            if(num/i !=num)
            {
                s.push(num/i);
            }
        }
    }


    return 0;
}