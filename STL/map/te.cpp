#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void print(vector<pair<int,int> > &ms)
{
    for(auto itr = ms.begin();itr!= ms.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}


int main()
{
    vector<pair<int,int> > ms;

    ms.push_back({10,11});
    ms.push_back({16,1});
    ms.push_back({12,1});

    
    print(ms);
    auto itr = max_element(ms.begin(),ms.end());
    cout<<itr->first;
    return 0;
}