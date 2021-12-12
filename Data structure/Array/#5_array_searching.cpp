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

string searching_element(int arr[], int used_size , int total_size , int search_element)
{
    int count;
    if(used_size >= total_size)
    {
        return " used size is greater or equal to total size";
    }
    else
        for (int i = 0; i < used_size; i++)
        {
            if(arr[i] == search_element)
            {
                cout<<" element is present in this array, at index :: "<<i<< "  and position ::"<< i+1;
            }
            else if(arr[i]!= search_element)
                
                if(i==used_size-1)cout<<" Element is not present in this array "<<endl;
        }

    return " search completed";
        
            
            
}
int main()
{
    int arr[20] ={1,2,4,5,6,7};
    int total_size=20;
    int used_size =6;
    int search_element=20;  // search any element you want
    searching_element(arr, used_size,total_size,search_element);
    cout<<endl;

    return 0;
}