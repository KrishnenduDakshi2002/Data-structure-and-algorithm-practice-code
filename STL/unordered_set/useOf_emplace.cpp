
// emplace() is used to avoid duplication in unordered set
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
/*
    size of unordered set is decided by a function randomly
    if the unordered set becomes full then it resizes itself with the help of the output 
    from that function
*/
#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;


// elements are store in an unordered set randomly using some random hashfunction
unordered_set<int> insert(int arr[],int size)
{
    unordered_set<int> unor_set;
    for(auto i=0;i<size;i++)
    {
        unor_set.emplace(arr[i]);
    }
    return unor_set;
}

void show(unordered_set<int> un)
{ cout<<"Unordered set is :";
    for(auto itr=un.begin();itr!=un.end();itr++)
    {
        cout<<*itr<<" ";
    }
}
// ,23,45,22,43,23,56,76,78,98,23,24,42,23,43,22,1234,563,345
int main()
{
    int arr[]={1,43,32,23};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    show(insert(arr,size));
    NEWLINE
    cout<<"Load factor :"<<insert(arr,size).load_factor();// (total size/no of bucket)
    NEWLINE
    cout<<"Max bucket size :"<<insert(arr,size).max_bucket_count()<<endl;// no of elements can store by a bucket
    cout<<"Bucket count :"<<insert(arr,size).bucket_count()<<endl;
    int count =1;
    for(int i=1;i<insert(arr,size).bucket_count();i++) // this will give no of elements present in every bucket
    {
        cout<<insert(arr,size).bucket_size(i)<<" ";
        count++;
    }
    NEWLINE
    cout<<count<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" present in the bucket :"<<insert(arr,size).bucket(arr[i])<<endl;

    }
    


    return 0;
}