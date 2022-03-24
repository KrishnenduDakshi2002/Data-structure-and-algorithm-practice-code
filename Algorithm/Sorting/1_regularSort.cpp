#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;



// Selection Sort
// Bubble Sort
// Recursive Bubble Sort
// Insertion Sort
// Recursive Insertion Sort
// Merge Sort
// Iterative Merge Sort
// Quick Sort
// Iterative Quick Sort
// Heap Sort
// Counting Sort
// Radix Sort
// Bucket Sort
// ShellSort
// TimSort
// Comb Sort
// Pigeonhole Sort
// Cycle Sort
// Cocktail Sort
// Strand Sort


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size = 10;
    int arr[size]={12,1,3,34,45,23,1,3,105,5};

    //normal sorting 
    for(auto i =0;i<size;i++)
    {
        for(auto j =i+1;j<size;j++)
        {
            if(arr[j]<= arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


    for(auto i : arr)
    {
        cout<<(i)<<endl;
    }


    
    return 0;
}