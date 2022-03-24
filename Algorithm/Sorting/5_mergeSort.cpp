#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;

// merge sort and  quick sort are based on divide and conquer
void merge(int arr[], int startIndex, int midIndex, int endIndex)
{
    int *merged = new int[endIndex - startIndex + 1];
    int size = endIndex - startIndex +1;

    int index1 = startIndex;
    int index2 = midIndex + 1;

    int indexOfMerged = 0;

    while (index1 <= midIndex && index2 <= endIndex)
    {
        if (arr[index1] <= arr[index2])
        {
            merged[indexOfMerged++] = arr[index1++];
        }
        else
        {

            merged[indexOfMerged++] = arr[index2++];
        }
    }

    while (index1 <= midIndex)
    {
        merged[indexOfMerged] = arr[index1];
        indexOfMerged++;
        index1++;
    }

    while (index2 <= endIndex)
    {
        merged[indexOfMerged] = arr[index2];
        indexOfMerged++;
        index2++;
    }


    //now copying merged array to old array
    for(int i =0,j=startIndex;i<size;i++,j++)
    {
        arr[j] = merged[i];
    }
}

void divide(int arr[], int startIndex, int endIndex)
{
    // stopping condition
    if (startIndex >= endIndex)
    {
        return;
    }

    int midIndex = startIndex + (endIndex - startIndex) / 2;
    divide(arr, startIndex, midIndex);
    divide(arr, midIndex + 1, endIndex);
    merge(arr, startIndex, midIndex, endIndex);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[]={12,-1,3,34,45,23,2,3,105,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    divide(arr,0,size-1);

     for(auto i : arr)
    {
        cout<<(i)<<endl;
    }


    return 0;
}