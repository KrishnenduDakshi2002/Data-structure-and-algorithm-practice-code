#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;




int main()
{
    vector<int> vec((12,12,13,14,16,17,18,19,20991));

    unordered_set<int> uset(vec.begin(),vec.end());

    cout<<uset.bucket_count()<<endl;
    cout<<uset.bucket_count()<<endl;

    if(uset.find(17)!=uset.end())
    {
        cout<<"element found"<<endl;
    }


    // for(auto itr=uset.begin();itr!=uset.end();itr++)
    // {
    //     if(uset.find(17)==uset.end())
    //     {
    //         cout<<*itr<<endl;
    //     }
    // }





    // for(auto itr=uset.begin();itr!=uset.end();itr++)
    // {
    //     cout<<*itr<<endl;
    //     cout<<"test"<<endl;
    // }

    return 0;
}