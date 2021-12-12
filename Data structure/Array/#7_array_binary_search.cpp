#include <iostream>
#include <stdlib.h>
#define NEWLINE cout << endl;
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// for sorting array
void sorting_ele(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// for binary searching in array

int binary_searching(int arr[], int size, int search_ele)
{
    int low, mid, high;
    low =0;
    high = size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (search_ele == arr[mid])
        {
            return mid;
        }
        if (search_ele > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[10];
    int size =10;
    int size_arr = sizeof(arr) / sizeof(int);
    srand(time(0));
    // for inserting elements
    for (int i = 0; i < size_arr; i++)
    {
        arr[i] = rand() % 50 + 1; // has more variation
    }

    sorting_ele(arr,size);
    int searched_index = binary_searching(arr,size,20);

    display(arr, size);
    NEWLINE
    cout<<" Elment is present at index ::"<<searched_index<<endl;

    return 0;
}