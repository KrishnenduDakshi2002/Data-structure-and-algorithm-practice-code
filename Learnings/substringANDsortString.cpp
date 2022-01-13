#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void substring(string str,int i, string curr)
{
    if(str.length()==i)
    {
        cout<<curr<<endl;
        return;
    }

    substring(str,i+1,curr+str[i]);
    substring(str,i+1,curr);

}

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str = "ab";
    string curr = "";
    substring(str,0,curr);

    // sort(str.begin(),str.end(),compare); // sort will be done in  decreasing order
    // cout<<str;

    
    return 0;
}