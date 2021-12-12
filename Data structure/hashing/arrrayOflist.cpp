#include <iostream>
#include <list>
#define NEWLINE cout << endl;
using namespace std;
////////////// EXPLANATION //////////////
/*
    (index 0)  list1
    (index 1)  list2
    (index 2)  list3
    (index 3)  list4
    (index 4)  list5
    (index 5)  list6
    (index 6)  list7
    (index 7)  list8
    (index 8)  list9
    (index 9)  list10
    
*/
/*
    it is similar 
    int array[10];
    we have blocks of int datatype, with index 0 to size-1

    like :
    in array of list
    we have blcoks of list datastructure , with index 0 to size-1

*/

// for creating hashkey
int hashKey(int key)
{
    return (key) % 10;
}

// function for displaying array of list
void show(list<int> arrOfList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index " << i << ": ";
        for (list<int>::iterator itr = arrOfList[i].begin(); itr != arrOfList[i].end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
    }
}

int main()
{
    int size = 10;
    list<int> arrOfList[size];
    int arr[15] = {12, 22, 34, 21, 49, 78, 98, 37, 38, 45, 91, 35, 56, 78};

// pushing indivisually to the array of list
    
    // arrOfList[2].push_back(11);
    // arrOfList[2].push_back(12);
    // arrOfList[2].push_back(13);

    // arrOfList[5].push_back(1);
    // arrOfList[5].push_back(2);
    // arrOfList[5].push_back(3);

// pushing elemets using for loop
    // taking elements from arr[15]
    for (int i = 0; i < 10; i++)
    {
        int hashkey = hashKey(arr[i]);
        arrOfList[hashkey].push_back(arr[i]);
    }
// show function call
    show(arrOfList, size);

    return 0;
}