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

// for deletion of any element
void erase_ele(int arr[], int  * size, int index)
{
    for (int i = 0; i < (*size - index - 1); i++)
    {
        arr[index + i] = arr[index + 1 + i];
    }
    arr[*size - 1] = 0;
    *size = *size -1;
}


int main()
{
    int arr[10] = {3, 5, 9, 2, 6};
   
    int total_size = 10;
    int used_size = 5;
    int index = 2;
    erase_ele(arr,&used_size,index);
    display(arr, used_size);
    cout<<endl;
    cout<<" after every erase_ele() function invokes used_size will decrease by 1, now value is :: "<<used_size<<endl;

  
    return 0;
}