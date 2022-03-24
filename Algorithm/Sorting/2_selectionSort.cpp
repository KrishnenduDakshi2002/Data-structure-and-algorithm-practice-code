#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;

/*
    The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted. 
2) Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 
*/


void swap(int arr[],int x ,int y)
{
    int temp = arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}

int smallestEle(int arr[],int initialPos,int arraysize)
{
    int minEle = INT_MAX;
    int minEleInd = -1;
    for(auto i=initialPos;i<arraysize;i++)
    {
        if(arr[i]<= minEle)
        {
            minEle = arr[i];
            minEleInd = i;
        }
    }
    return minEleInd;
}

void selectionSort(int arr[],int sizeOfArray)
{
    for(auto i=0;i<sizeOfArray;i++)
    {
        int minEleInd = smallestEle(arr,i,sizeOfArray);
        swap(arr,i,minEleInd);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[]={12,-1,3,34,45,23,2,3,105,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    

    selectionSort(arr,size);

     for(auto i : arr)
    {
        cout<<(i)<<endl;
    }

    

    
    return 0;
}