// https://www.geeksforgeeks.org/majority-element/

// these algorithm deals with this problem in O(n) time and O(1) space
// one of the most optimize way to do this

#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

int majority_element(int a[],int size)
{
    int maj_count = 1,maj_index=0;
    for(int i=1;i<size;i++)
    {
        if(a[maj_index]==a[i])
        {
            maj_count++;
        }
        else
        {
            maj_count--;
        }
        
        if(maj_count==0)
        {
            maj_index=i;
            maj_count =1;
        }
    }
    return a[maj_index];
}

bool isMajority(int ele,int a[],int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        if(a[i]== ele)
        {
            count++;
        }
    }

    if(count > size/2) // count has to be N/2  {1,2,3,1,1,2} -> still here 1 is major, but it 
    //will give no majority , as 6/2 =3 ,count is not greater than 3
    {
        return true;
    }
    else return false;

}

void printMajority(int a[], int size)
{
    int ele = majority_element(a,size);

    if(isMajority(ele,a,size))
    {
        cout<<"Majority element is present"<<", and the element is :"<<ele<<endl;
    }
    else
    {
        cout<<"No majority element"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[] = {1,2,3,1,1,2,1};
    int size = sizeof(a)/sizeof(a[0]);

    printMajority(a,size);

    
    return 0;
}