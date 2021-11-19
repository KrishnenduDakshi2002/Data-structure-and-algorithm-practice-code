#include <iostream>
using namespace std;

class myArray
{
    public:
        int total_size;  // want to reserve total amount of size
        int used_size;  // want to use total amount of size
        int *ptr;   // creating a pointer to points to the first element of array

        void create_array( myArray *a, int tsize, int usize);
        void set( myArray *a)
        {
            for (int i = 0; i < a->used_size; i++)
            {
                cout<<"enter elements ";
            
                cin>> a->ptr[i];
            }
            
        }
        void show( myArray *a)
        {
            for (int i = 0; i < a->used_size; i++)
            {
                cout<< a->ptr[i]<< " ";
            }
            
        }


};

void myArray ::create_array( myArray *a, int tsize, int usize)
{
    a->total_size = tsize;  // in stack
    a->used_size = usize;    // in stack
    a->ptr = new int[tsize];  // new operator will allocate memory in heap
    


}





int main()
{
    myArray marks;
    int *a = marks.ptr;
   
    marks.create_array(& marks , 10 ,2);  
    marks.set( & marks);  // here we are putting 2 elements into array
    marks.show( &marks);
    
    cout<<endl;
    cout<<"address of ptr is :"<< &a<<endl;
    cout<<endl;
    
    marks.create_array(& marks , 10 ,3);
    marks.set( & marks);  // when we are putting 3 values to array, it will overwrite the previous 
    marks.show( &marks);
    
    cout<<endl;
    cout<<"address of ptr is :"<< &a<<endl;



    return 0;
}