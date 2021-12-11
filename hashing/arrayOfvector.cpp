#include <iostream>
#include <vector>
#define NEWLINE cout<<endl;
using namespace std;


int hashKey(int key)
{
    return (key) % 10;
}

// for printing array of vector
void show(vector<int> vec[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Index "<<i<<": ";
        for(vector<int>::iterator itr = vec[i].begin();itr!=vec[i].end();itr++)
        {
            cout<<*itr<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    const int size = 10;
    vector<int> vec[size];
    // for reference of elements
    int arr[15] = {12, 22, 34, 21, 49, 78, 98, 37, 38, 45, 91, 35, 56, 78};

// pushing elements using for loop
    
    for(int i=0;i<15;i++)
    {
        vec[hashKey(arr[i])].push_back(arr[i]);
    }
    

    show(vec,size);
    

    return 0;
}