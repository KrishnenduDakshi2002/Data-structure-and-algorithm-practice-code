#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void show(vector<int> vec)
{
    for(auto itr = vec.begin();itr!=vec.end();itr++)
    {
        cout<<*itr<<" ";
    }
}

vector<int>  addre()
{
    vector<int> vec1;
    vec1.push_back(111);
    vec1.push_back(171);
    vec1.push_back(161);
    vec1.push_back(151);
    vec1.push_back(141);
    vec1.push_back(131);
    vec1.push_back(121);

    return vec1;
}

int main()
{
    vector<int> vec;
    vec.push_back(11);
    vec.push_back(17);
    vec.push_back(16);
    vec.push_back(15);
    vec.push_back(14);
    vec.push_back(13);
    vec.push_back(12);

    show(vec);
    NEWLINE
    show(addre());

    return 0;
}