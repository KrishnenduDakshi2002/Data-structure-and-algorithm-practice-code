

/*
    find the two non-repeating elements in an array 
    where every element repeats twice
*/

#include <bits/stdc++.h>
#define NEWLINE cout<<endl;
using namespace std;




int main()
{
    int a[]={5,4,1,4,3,5,1,2};
    int res = 0;
    //taking XOR of all elements 
    for(int i=0;i<8;i++)
    {
        res = res ^ a[i];
    }
    //finding set bit position in res
    int index;
    for(int i=0;i<log2(res)+1;i++)
    {
        if(((res & (1<< i)) >> i) == 1)
        {
            index = i;
            break;
        }
    }
    // now i have to find those numbers whose value at index is  1 in the array
    // and then taking their XOR
    int partXOR = 0;
    for(int i=0;i<8;i++)
    {
        if(((a[i] & (1<< index)) >> index) == 1)
        {
            partXOR = (partXOR ^ a[i]);
        }
    }

    cout<<"First element is "<<(res ^ partXOR)<<" second element is "<<((res ^ partXOR) ^ res);
    
    return 0;
}