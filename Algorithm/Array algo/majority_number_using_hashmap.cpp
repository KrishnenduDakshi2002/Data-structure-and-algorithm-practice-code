#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;
//time complexity is o(n) but space complexity is O(n)
void findMajority(int a[], int size)
{
    unordered_map<int, int> um;
    for (int i = 0; i < size; i++)
    {
        um[a[i]]++;
    }
    int count =0;
    for(auto i: um)
    {
        if(i.second > size/2)
        {
            count = 1;
            cout<<"Majority element is found "<<i.first<<endl;
        }
    }

    if(count ==0)
        cout<<"No majority element is found"<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[]={1,2,3,1,1,2};
    int size = sizeof(a)/sizeof(a[0]);
// if the major element count is not greater than the size/2 then it will  
// give not major element is found
    findMajority(a,size);
    return 0;
}