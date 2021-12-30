
// unordered_set is an implementation of hashing and hashtable 
// unordered_map is also implementation of hashtable

// finding duplicate items in an array using unoreder_set

/*
    [Bucket 01]->ele01->ele02->ele05
    [Bucket 02]->ele08
    [Bucket 03]->ele011->ele15
    [Bucket 04]->ele10->ele03->ele06
    [Bucket 05]
    [Bucket 06]->ele04->ele07->ele09
    ....
    ....
    ....
*/
#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void show(unordered_set<int> us)
{
    cout<<"show"<<endl;
    for(auto itr=us.begin();itr!=us.end();itr++)
    {
        cout<<*itr<<" ";
    }
}

void find_duplicate(int arr[],int size)
{
    unordered_set<int> actual;
    unordered_set<int> duplicate;

    cout<<"find duplicate"<<endl;
    for(auto i=0;i<size;i++)
    {
        // find() fucntion checks whether arr[i] element is present in the unordered set or not
        // if elemt is not present then find() will return the itr points to end , if not then 
        // add elemt into the unoredered set
        if(actual.find(arr[i])==actual.end())
        {
            actual.insert(arr[i]);
        }
        // if elemt is present then insert elemt into the duplicate unordered set
        else
        {
            duplicate.insert(arr[i]);
        }
    }
    // printing the elemts of duplicate unordered set
    for(auto itr=duplicate.begin();itr!=duplicate.end();itr++)
    {
        cout<<*itr<<" ";
    }
}

int main()
{
    
    int arr[]={1,43,32,23,45,22,43,23,56,76,78,98,23,24,42,23,43,22};
    int size = sizeof(arr)/sizeof(arr[0]);

    find_duplicate(arr,size);

    return 0;
}