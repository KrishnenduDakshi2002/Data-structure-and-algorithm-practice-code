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
void set_insert_element(int & element)
{
    cout<<"Enter the number(between 1 to 6) which you want to insert :: ";
    cin>>element;
}

string insertion_sorted(int arr[], int total_size , int used_size, int insert_element)
{
    if(used_size >= total_size)
    {
        return "unsuccessful insertion";
    }
    else
        for (int i = 0; i < used_size; i++)
        {
            if((arr[i]==insert_element || arr[i] < insert_element) &&  arr[i+1] > insert_element)
            {
                for (int j = 0; j < (used_size-i); j++)
                {
                    arr[used_size-j] = arr[used_size - j -1];
                }
                arr[i+1] = insert_element;
                break;
            }
            
        }
    return " successful insetion ";
        
        

}


int main()
{
    int arr[100] ={1,2,4,5,6,7};
    int total_size=100;
    int used_size =6;
    int insert_element;
    set_insert_element(insert_element);
    cout<<" successful insertion(1) and unsuccessful insetion(-1) :: "<<insertion_sorted(arr,total_size,used_size,insert_element); // the inserted number cann't be the number which is last element of arry(example 7)
    cout<<endl;
    display(arr,used_size+1);
    cout<<endl;
    cout<<"I am the best !!!"<<endl;


  
  
    
    return 0;
}