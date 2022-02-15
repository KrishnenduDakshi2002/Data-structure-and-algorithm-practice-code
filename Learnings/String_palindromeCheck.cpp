#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

bool palindrome(int i,int j, string str)
{
    if(i >= j)
    {
        return true;
    }
    else if(str[i]==str[j])
    {
        return palindrome(i+1,j-1,str);
    }
    
    return false;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "110011";
    cout<<palindrome(0,s.length()-1,s);
    
    return 0;
}