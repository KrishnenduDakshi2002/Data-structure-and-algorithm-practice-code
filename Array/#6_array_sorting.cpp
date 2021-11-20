#include <iostream>

using namespace std;
#define ARRAY_SIZE 5;

// for displaying array elements
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

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

int main()
{
    int arr[10] = {3, 5, 9, 2, 6};

    int total_size = 10;
    int used_size = 5;
    sorting_ele(arr, used_size);
    display(arr, used_size);

    return 0;
}