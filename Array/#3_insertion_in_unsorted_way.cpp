#include <iostream>
using namespace std;
// for displaying array elements
void display( int arr[], int n)
{
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<< "  ";
    }
    
}

// for insertion in unsorted array
int unsorted_insertion(int arr[], int size ,int capacity,  int element_insert, int insert_index)
{
    if(size>= capacity)
    {
        return -1;  //unsuccessful insertion
    }
    else
        for (int i = 0; i < insert_index; i++)
        {
            arr[size-i] = arr[size-i-1];

        }
        arr[insert_index]=element_insert;

        return 1;
        display(arr, size+1);
        
}
// for insertion in sorted array
int sorted_insertion(int arr[], int size ,int capacity,  int element_insert)
{
    if(size>= capacity)
    {
        return -1;  //unsuccessful insertion
    }
    else
        for (int  i = 0; i < size; i++)
        {
            /* code */
            if((arr[i]==element_insert || arr[i] < element_insert) && (arr[i+1]>element_insert))
            {   
                for (int j = 0; i < (size - j); j++)
                {
                    arr[size -i] = arr[size-i-1];
                }
                arr[i] = element_insert;


            }
            else
                cout<<"error"<<endl;
            
        }
        
        
        
}

int main()
{
    int arr[100] = { 1,2,3,4};
    int total_size = 100;
    int used_size=4;
    int element_insert= 450;
    int insert_index =2;
    display(arr,used_size);
    cout<<endl;
    cout<<"Insertion is (-1): for unsuccessful , (1): for successful --> "<<unsorted_insertion(arr,used_size,total_size,element_insert,insert_index);
    cout<<endl;
    display(arr,used_size+1);
  
  
    
    return 0;
}