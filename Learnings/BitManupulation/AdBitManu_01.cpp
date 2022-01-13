/*
    Question states that we are given an array 
    in that array except one element every element 
    has more than one  in that array, we have to find that
    one element whose frequency is 1
    a = [1,4,3,6,4,1,6]
    ans - 3
    
    three possible ways to do it
    1) O(n2) time and O(1) space  --> nested for loop
    2) O(n) time and  O(n) space  --> map
    3) O(n) time and O(1) space   --> bitwise XOR

    1^4^3^6^4 -> 1^3^6  (if we repeat 4 twice then it will removed from the XOR)
    1^3^6^1 -> 3^6
    3^6^6 -> 3
    
*/

#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;




int main()
{
    int a[] = {1,4,6,1,3,4,6};

    int ans = 0;
    for(int i=0;i<7;i++)
    {
        ans = ans ^ a[i];
    }  
    cout<<ans; 
    return 0;
}