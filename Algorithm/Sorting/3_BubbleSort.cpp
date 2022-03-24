#include <bits/stdc++.h>
#define NEWLINE cout << endl;
using namespace std;

/*
   Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
Example:
First Pass:
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
Second Pass:
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.
Third Pass:
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

*/

void swap(int arr[], int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void bubbleSort(int arr[], int sizeOfArr)
{
    bool no_swap = true;
    do
    {
        no_swap = true;
        for (auto i = 0, j = i + 1; j < sizeOfArr; i++, j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr, i, j);
                no_swap = false;
            }
        }
    } while (no_swap == false);
}

void BubbleSortRecur(int arr[], int sizeOfArr)
{
    bool no_swap = true;

    for (auto i = 0, j = i + 1; j < sizeOfArr; i++, j++)
    {
        if (arr[j] < arr[i])
        {
            swap(arr, i, j);
            no_swap = false;
        }
    }

    //stopping condition
    if(no_swap == true)
    {
        return;
    }
    else{
        BubbleSortRecur(arr,sizeOfArr);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {12, -1, 3, 34, 45, 23, 2, 3, 105, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // bubbleSort(arr, size);
    BubbleSortRecur(arr,size);
    for (auto i : arr)
    {
        cout << (i) << endl;
    }

    return 0;
}