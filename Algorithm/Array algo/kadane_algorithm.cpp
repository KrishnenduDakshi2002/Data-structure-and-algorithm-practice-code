// kadane's algorithm deals with maximum sum of a subarray of a given array
/*
    [-2, -3, 4, -1, -2, 1, 5, -3]

    that subarray which gives the maximum sum is [4, -1, -2, 1, 5]
    
*/

#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

int MaxSumArray(int a[],int size)
{
    int max_sum = INT_MIN;
    int max_by_far = 0;
    for(int i=0;i<size;i++)
    {
        max_by_far = max_by_far + a[i];
        if(max_by_far > max_sum)
        {
            max_sum = max_by_far;
        }
        else if(max_by_far < 0)
        {
            max_by_far = 0;
        }
    }
    return max_sum;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[]= {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<MaxSumArray(a,size);

    
    return 0;
}