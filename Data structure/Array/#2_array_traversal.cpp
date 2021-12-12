// traversal--> visiting all elements of an array, to setting up value or reading those values
#include <iostream>
using namespace std;

int main()
{
    int tsize;
    int usize;


    cout << "Enter total size of the array ";
    cin >> tsize;
    cout << "Enter used size of the array ";
    cin >> usize;
    int arr[tsize];

    // for setting up the array elements
    for (int i = 0; i < usize; i++)
    {
        arr[i] = 2 * i;
    }
    // for displaying the array elements
    for (int i = 0; i < usize; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}