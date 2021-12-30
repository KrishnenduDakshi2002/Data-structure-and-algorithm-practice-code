
/*
    1. store elements in a sorted order
    2. Elements have to unique
    3. value cann't be modified once it added like an array
        but we can delete that value and insert another one
        but we cann't directily modify any element
        So it is immutable
        
    4. Sets follow the Binary search tree implementation.
    5. The values in a set are unindexed.
    
*/



#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

void display(set<int> s)
{
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
}
void display(set<int,greater<int> > s)
{
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
}


int main()
{
    set<int> s1={24,45,46,23,43,12,11,13,90}; //sort in increasing order
    set<int,greater<int> > s2={24,45,46,23,43,12,11,13,90}; // sort in drecreasing order

    if(s1.find(43)!=s1.end())
    {
        cout<<"Element is found"<<endl;   
    }

    //before insertion
    display(s1);
    NEWLINE
    display(s2);
    NEWLINE

    //after insertion
    s1.insert(43); // as 43 is present in the set it will no accept same value
    s2.insert(13); // as 13 is present in the set it will no accept same value
    display(s1);
    NEWLINE
    display(s2);




    return 0;
}