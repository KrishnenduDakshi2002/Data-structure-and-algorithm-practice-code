#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;


int main()
{
    unordered_set<int> uset={11,34,21,34,54,23,43,12,89,55,76,99};



// let's assuming that we are dealing with the number 34 only


    if(uset.find(34)!=uset.end())
    {
        cout<<"element found"<<endl;
    }

    // .bucket(key) gives the index of the bucket where the key lies
    cout<<uset.bucket(34)<<endl;

    //total numbers of bucket present in the unordered_set
    cout<<uset.bucket_count()<<endl;

    //gives the numberes of element present in a bucket index where the element lies
    cout<<uset.bucket_size(uset.bucket(34))<<endl; // it gives 2, that mean there are 2 elem

    //max number of bucket an unordered_set can store
    
    //cout<<uset.max_bucket_count()<<endl;

    for(auto itr=uset.begin();itr!=uset.end();itr++)
    {
        cout<<*itr<<" ";//these print out all the elements 
        
    }
    cout<<endl;
    // prints out the total numbers of element present in that index of that element
    for(auto itr=uset.begin();itr!=uset.end();itr++)
    {
        cout<<uset.bucket_size(uset.bucket(*itr))<<" ";
    }
    cout<<endl;
    cout<<uset.bucket_count()<<endl;
    // prints out the numbers of elements in a bucket
    for(auto itr=0;itr<uset.bucket_count();itr++)
    {
        cout<<uset.bucket_size(itr)<<" ";
        
    }

    return 0;
}